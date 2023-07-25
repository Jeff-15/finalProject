#include "gameBoard.h"
#include "dice.h"
#include "loadedDice.h"
#include "RandomDice.h"
#include "const.h"
#include <iostream>

void GameBoard::processCommand(int target,int eventPara1, int eventPara2) {
    if(eventPara1 == 0){
        if(eventPara2 == 0){
            dice = LoadedDice{this,target};
        }
        else if(eventPara2 == 1){
            dice = RandomDice{this,target};
        }
        else if(eventPara2 == 2){
            diceRoll = dice.generate();
            processDice(target);
        }
    }
    if(eventPara1 == CONSTANTS::ROADCOMMAND){
        constructRoad(target,eventPara2);
    }
}
void GameBoard::initialize() {
    // initialize dice, default random dice
    for (int i = 0; i < 4; ++i) {
        Dice* d = new LoadedDice(this, i);
    }
    return;
}

int GameBoard::name_to_index(std::string player_name) {
    // Blue Red, Orange Yellow
    if (player_name == "B") {
        return 0;
    } else if (player_name == "R") {
        return 1;
    } else if (player_name == "O") {
        return 2;
    } else {
        return 3;
    }
}
std::string GameBoard::index_to_name(int player_index) {
    std::string out;
    if (player_index == 0) {
        out = "B";
    } else if (player_index == 1) {
        out = "R";
    } else if (player_index == 2) {
        out = 'O';
    } else {
        out = "Y";
    }
    return out;
}

int get_resource_code(std::string s) {
    if (s == "BRICK") {
        return 100;
    } else if (s == "ENERGY") {
        return 101;
    } else if (s == "GLASS") {
        return 102;
    } else if (s == "HEAT") {
        return 103;
    } else {
        return 104;
    }
}

std::string GameBoard::convert_short_to_full_name(std::string sh) {
    std::string result;
    if (sh == "B") {
        result = "Blue";
    } else if (sh == "O") {
        result =  "Orange";
    } else if (sh == "R") {
        result = "Red";
    } else {
        result = "Yellow";
    }
    return result;
}

void GameBoard::player_get_resource () {
    //Order: BRICK, ENERGY,GLASS, HEAT, WIFI.
    // set resource
    for (int i = 0; i < 19; ++i) {
        if (tiles[i]->getVal() == diceRoll) {
            if (tiles[i]->getGoose()) continue;
            std::string item = tiles[i]->getType();
            int code = get_resource_code(item);
            for (auto vertex : tiles[i]->getNeighbourVertex()) {
                if (vertices[vertex]->own()) {
                    int player_num = name_to_index(vertices[vertex]->getOwner());
                    // notify(target (player code), eventPara1 100~104, eventPara2 1~3): recieve resources (call when giving player resources)
                    notifyPlayer(0,100,1); // give player index 0 / 1 item of / item 0
                    if (tiles[i]->getType() == "B") {
                        notifyPlayer(player_num,code , 1);
                    } else if (tiles[i]->getType() == "H") {
                        notifyPlayer(player_num,code , 2);
                    } else {
                        notifyPlayer(player_num,code , 3);
                    }
                }
            }
        }
    }
}

void GameBoard::processGeese(int tileIndex, int index, std::string activePlayer) {
    std::string s;
    Tile* dest = tiles[tileIndex];
    dest->setStatus(true);
    std::vector <std::string> builders;
    for (auto vertex : dest->getNeighbourVertex()) {
        if (vertices[vertex]->own()) {
            std::string name = vertices[vertex]->getOwner();
            if (name == activePlayer)continue;
            name = convert_short_to_full_name(name);
            builders.emplace_back(name);
        }
    }
    if (builders.empty()) {
        std::cout << "Builder " << convert_short_to_full_name(activePlayer) << " has no builders to steal from." << std::endl;
        return;
    }
    std::cout << "Builder " << index << " can choose to steal from:";
    for (auto i : builders) {
        std::cout << " " << i;
    }
    std::cout << "." << std::endl;
    std::cout<<">";
    std:: cout << "Choose a builder to steal from." << std::endl;
    notifyPlayer(index,-1,1);   // get input
    
    int steel_index;
    //check if target is available
    bool found = false;
    for (auto i : dest->getNeighbourVertex()) {
        if (name_to_index(vertices[i]->getOwner()) == input) {
            found = true;
            steel_index = i;
            break;
        }
    }
    notifyPlayer(input,1,2);    // set steel which resource
    int active_player_index = name_to_index(activePlayer);
    notifyPlayer(active_player_index, input + 100, 1);    // give 1 some resource to player
    std::string r_name;         // resource name
    if (input == 0) {
        r_name = "BRICK";
    } else if (input == 1) {
        r_name = "ENERGY";
    } else if (input == 2) {
        r_name = "GLASS";
    } else if (input == 3) {
        r_name = "HEAT";
    } else if (input == 4) {
        r_name = "WIFI";
    } else {
        // DO SOMETHING HERE!!
    }
    std::string curr_player_name = convert_short_to_full_name(activePlayer);
    std::cout << "Builder " << curr_player_name << " steals " << r_name << " from builder ";
    vertices[steel_index]->printOwner();
    std::cout << "." << std::endl;
}

void GameBoard::processDice(int index){
    if(diceRoll == 7){
        notifyPlayer(-1,1,0);
        notifyPlayer(index,-1,0);
        processGeese(input,index);
        notifyPlayer(index,100+input,1);
    }
    else{
        player_get_resource();
    }
}

void GameBoard::constructRoad(int player_id, int edgeIndex) {
    if (edges[edgeIndex]->own()) {
        throw "Already build";
        return;
    }
    bool found = false;
    // check edge
    for (auto i : edges[edgeIndex]->getNeighbourEdge()) {
        int edge_player_id = name_to_index(edges[i]->getOwner());
        if (edges[i]->own() && edge_player_id == player_id) {
            found = true;
            break;
        }
    }

    // now check vertex
    for (auto i : edges[edgeIndex]->getNeighbourVertex()) {
        int vertex_player_id = name_to_index(vertices[i]->getOwner());
        if (vertices[i]->own() && vertex_player_id == player_id) {
            found = true;
            break;
        }
    }
    // check if found
    if (found) {
        edges[edgeIndex]->setStatus(true);
        edges[edgeIndex]->setOwner(index_to_name(player_id));
    } else {
        throw "No neighbour";
    }
    return;
}

void GameBoard::build_residence(int player_id, int vertexIndex) {
    if (vertices[vertexIndex]->own()) {
        throw "Already build";
        return;
    }
    // check adjacent vertex
    for (auto i : vertices[vertexIndex]->getNeighbourVertex()) {
        if (vertices[i]->own()) {
            throw "adjacent to a existing residence";
            return;
        }
    }

    // now check if exist an adjacent road
    for (auto i : vertices[vertexIndex]->getNeighbourEdge()) {
        if (edges[i]->own() && player_id == name_to_index(edges[i]->getOwner())) {
            vertices[vertexIndex]->setStatus(true);
            vertices[vertexIndex]->setOwner(index_to_name(player_id));
            vertices[vertexIndex]->build(index_to_name(player_id));
            return;
        }
    }
    throw "No adjacent road";
    return;
}

void GameBoard::improve_residence(int vertexIndex) {
    vertices[vertexIndex]->improve();
    return;
}

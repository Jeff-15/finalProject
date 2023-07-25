#include "gameBoard.h"
#include "dice.h"
#include "loadedDice.h"
#include "RandomDice.h"
#include "const.h"
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

void GameBoard::player_get_resource () {
    //Order: BRICK, ENERGY,GLASS, HEAT, WIFI.
    // set resource
    for (int i = 0; i < 19; ++i) {
        if (t[i]->getVal() == diceRoll) {
            if (t[i]->getGoose()) continue;
            std::string item = t[i]->getType();
            int code = get_resource_code(item);
            for (auto vertex : t[i]->getNeighbourVertex()) {
                if (v[vertex]->own()) {
                    int player_num = name_to_index(v[vertex]->getOwner());
                    // notify(target (player code), eventPara1 100~104, eventPara2 1~3): recieve resources (call when giving player resources)
                    notifyPlayer(0,100,1); // give player index 0 / 1 item of / item 0
                    if (t[i]->getType() == "B") {
                        notifyPlayer(player_num,code , 1);
                    } else if (t[i]->getType() == "H") {
                        notifyPlayer(player_num,code , 2);
                    } else {
                        notifyPlayer(player_num,code , 3);
                    }
                }
            }
        }
    }
}

void GameBoard::processGeese(int tileIndex, int index) {
    Tile* dest = t[tileIndex];
    std::vector <std::string> builders;
    for (auto vertex : dest->getNeighbourVertex()) {
        if (v[vertex]->own()) {
            std::string name = v[vertex]->getOwner();
            if (name == "B") {
                name = "Blue";
            } else if (name == "O") {
                name = "Orange";
            } else if (name == "R") {
                name = "Red";
            } else {
                name = "Yellow";
            }
            builders.emplace_back(name);
        }
    }
    std::cout << "Builder " << index << " can choose to steal from:";
    for (auto i : builders) {
        std::cout << " " << i;
    }
    std::cout << "." << std::endl;
    std::cout<<">";
    notifyPlayer(index,-1,1);
    //check if target is available
    notifyPlayer(input,1,2);
    
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

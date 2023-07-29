#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <chrono>
#include <vector>
#include "gameBoard.h"
#include "const.h"
#include "player.h"
#include "dice.h"
#include "loadedDice.h"
#include "RandomDice.h"
using namespace std;
//replace all iostream with functions in display and notify display

int rng(int start, int end){
    std::mt19937 rng;
    unsigned int seed = std::chrono::system_clock::now().time_since_epoch().count();
    rng.seed(seed);
    std::uniform_int_distribution<int> distribution(start, end);
    return distribution(rng);
}

void Player::turn(){
    //Set dice
    //cout<<"Builder "<<index<<"'s turn"<<endl;
    display->next(index);
    diceRoll();
}
// handles diceRolling
void Player::diceRoll(){
    while(true){
        string command = "";
        cout<<">";
        cin>>command;
        if(command == "load"){
            gb->processCommand(index,0,0);
        }
        else if(command == "fair"){
            gb->processCommand(index,0,1);
        }
        else if(command == "roll"){
            gb->processCommand(index,0,2);
            break;
        }
    }
}

int Player::action(){
    while(true){
        string command;
        cin>>command;//Display can handle info output commands on its own or by directly consult player
        //this function will not cover those commands
        if(command == "road"){
            int position;
            cin>>position;
            roadConstruct(position);
        }
    }
}

//strong guarantee
void Player::roadConstruct(int position){
    for(int i = 0; i<RESOURCETYPE;i++){
        if(resource[i]<CONSTANTS::ROADCOST[i]){
            display->insufficient();
            return;
        }
    }
    try{
        gb->processCommand(index,CONSTANTS::ROADCOMMAND,position);
        for(int i = 0; i<RESOURCETYPE;i++){
            resource[i]-=CONSTANTS::ROADCOST[i];
        }
    }catch(string s){
        cout<<s<<endl;
    }
}

//string guarantee
void Player::houseConstruct(int position){
    for(int i = 0; i<RESOURCETYPE;i++){
        if(resource[i]<CONSTANTS::BASEMENTCOST[i]){
            display->insufficient();
            return;
        }
    }
    try{
        gb->processCommand(index,CONSTANTS::BASEMENTCOMMAND,position);
        for(int i = 0; i<RESOURCETYPE;i++){
            resource[i]-=CONSTANTS::BASEMENTCOST[i];
        }
        basement.emplace_back(position);
    }catch(string s){
        cout<<s<<endl;
    }
}

<<<<<<< Updated upstream
=======
void Player::tradeRequest(int target, int resourceTypeGiven, int resourceTypeDemanded, int amountGiven, int amountDemanded){
    if(resource[resourceTypeGiven]<amountGiven){
        // cout<<"not possible, not enough resource"<<endl;
        display->insufficient();
        return;
    }
    gb->setInput(resourceTypeDemanded*100+amountDemanded);
    try{
        gb->processCommand(index,CONSTANTS::TRADECOMMAND*target,resourceTypeGiven*100+amountGiven);
        resource[resourceTypeGiven]-=amountGiven;
        resource[resourceTypeDemanded]+=resourceTypeDemanded;
    }catch(string s){
        cout<<s<<endl;
    }
}

void Player::tradeResponse(int target, int resourceTypeGiven, int resourceTypeDemanded, int amountGiven, int amountDemanded){
    if(resource[resourceTypeGiven]<amountGiven){
        throw("not possible, they don't have enough resources");
    }
    string approve;
    cin>>approve;
    if(approve == "y"){
        resource[resourceTypeGiven]-=amountGiven;
        resource[resourceTypeDemanded]+=resourceTypeDemanded;
    }
    else{
        throw("not approved. Try something else");
    }
    
    
}


>>>>>>> Stashed changes
void Player::improve(int position){
    for(size_t i = 0; i<basement.size(); i++){
        if(basement.at(i) == position){
            for(int k = 0; i<RESOURCETYPE;i++){
                if(resource[k]<CONSTANTS::HOUSECOST[k]){
                    display->insufficient();
                    return;
                }
            }
            gb->processCommand(index,CONSTANTS::IMPROVECOMMAND,position);
            for(int k = 0; i<RESOURCETYPE;i++){
                resource[k]-=CONSTANTS::HOUSECOST[k];
            }
            
            basement.erase(house.begin()+i);
            house.emplace_back(i);
            return;   
        }
    }
    for(size_t i = 0; i<house.size(); i++){
        if(house.at(i) == position){
            for(int k = 0; i<RESOURCETYPE;i++){
                if(resource[k]<CONSTANTS::TOWERCOST[k]){
                    display->insufficient();
                    return;
                }
            }
            gb->processCommand(index,CONSTANTS::IMPROVECOMMAND,position);
            for(int k = 0; i<RESOURCETYPE;i++){
                resource[k]-=CONSTANTS::TOWERCOST[k];
            }
            
            house.erase(house.begin()+i);
            tower.emplace_back(i);
            return;   
        }
    }
    // cout<<"Cannot improve: No valid building constructed at this position"<<endl;
    display->buildFail();
}

void Player::robberRandomLoss(){
    int total = resource[0]+resource[1]+resource[2]+resource[3]+resource[4];
    if(total>=gb->GEESELIMIT){
        int lost = total/2;
        for(int i = lost; i>0; i--){
            int k = randomLoss();
            resource[k] -= 1;
        }
    }
}

int Player::randomLoss(){
    int total = resource[0]+resource[1]+resource[2]+resource[3]+resource[4];
    if(total <1){
        return -1;
    }
    int r = rng(1,total);
    if(r<=resource[0]){
        resource[0]-=1;
        return 0;
    }
    else if(r<=resource[0]+resource[1]){
        resource[1]-=1;
        return 1;
    }
    else if(r<=resource[0]+resource[1]+resource[1]){
        resource[2]-=1;
        return 2;
    }
    else if(r<=resource[0]+resource[1]+resource[1]+resource[1]){
        resource[3]-=1;
        return 3;
    }
    else{
        resource[4] -= 1;
        return 4;
    }
}

int Player::notify(int target, int eventPara1, int eventPara2){
    if(target == index || target == -1){
        if(eventPara1 == -1){
            cout<<">";
            int input;
            cin>>input;
            gb->setInput(input);
        }
        else if(eventPara1 == 0){//turn start
            turn();
        }
        else if(eventPara1-100 >= 0 && eventPara1-100<=RESOURCETYPE){//gain resource from dice
            resource[eventPara1-100] += eventPara2;
        }
        else if(eventPara1 == 1 && eventPara2 == 0){//loss resource to geese
            robberRandomLoss();
        }
        else if(eventPara1 == 1){//geese stealing
            if(eventPara2 == 1){
                gb->setInput(resource[0]+resource[1]+resource[2]+resource[3]+resource[4]);
            }
            else if(eventPara2 == 2){//lose resource
                gb->setInput(randomLoss());
            }
        }
    }
    return 0;
}

Player::Player(int index,GameBoard *gb): gb {gb}, index {index} {
    for (int i = 0; i < RESOURCETYPE; ++i) {
        resource[i] = 0;
    }
}

void Player::player_print() {
    // order: BRICK, ENERGY, GLASS, HEAT, then WIFI.
    // <colour> has <numPoints> building points, <numBrick> brick, <numEnergy> energy,
    // <numGlass> glass, <numHeat> heat, and <numWiFi> WiFi.
    display->status(index, numPoints, resource);
    // int i = 0;
    // std::cout << player_name << " has " << numPoints << " building points, " << resource[i++] << " brick, " <<  resource[i++] << " energy," << std::endl;
    // std::cout << resource[i++] << " glass, " << resource[i++] << " heat, and " << resource[i++] << " WiFi." << std::endl;
    
}

int* Player::getResources() { return resource; }

std::vector <int> Player::getRoad() { return roads; }

std::vector <int> Player::getBasement() { return basement; }

std::vector <int> Player::getHouse() { return house; }

std::vector <int> Player::getTower() { return tower; }

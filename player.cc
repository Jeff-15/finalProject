#include "player.h"
#include "dice.h"
#include "loadedDice.h"
#include "RandomDice.h"
#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include "gameBoard.h"
#include "const.h"
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
    cout<<"Builder "<<index<<"'s turn"<<endl;
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
            
        }
    }
}

void Player::road(){
    for(int i = 0; i<RESOURCETYPE;i++){
        if(resource[i]<CONSTANTS::ROADCOST[i]){
            cout<<"Not enough minerals"<<endl;//replace with display commands
            return;
        }
        
        
    }
    int position = 0;//input
    gb->processCommand(index,CONSTANTS::ROADCOMMAND,position);
    
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
    int i = 0;
    std::cout << player_name << " has " << numPoints << " building points, " << resource[i++] << " brick, " <<  resource[i++] << " energy," << std::endl;
    std::cout << resource[i++] << " glass, " << resource[i++] << " heat, and " << resource[i++] << " WiFi." << std::endl;
}

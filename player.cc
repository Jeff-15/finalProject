#include "player.h"
#include "dice.h"
#include "loadedDice.h"
#include "RandomDice.h"
#include <iostream>
#include <string>
#include <random>
#include "gameBoard.h"
using namespace std;
//replace all iostream with functions in display and notify display

int rng(int start, int end){
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

void Player::robberRandomLoss(){
    int total = resource[0]+resource[1]+resource[2]+resource[3]+resource[4];
    if(total>=gb->GEESELIMIT){
        int lost = total/2;
        for(int i = lost; i>0; i--){

        }
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
        else if(eventPara1 == 0){
            turn();
        }
        else if(eventPara1-100 >= 0 && eventPara1-100<=RESOURCETYPE){
            resource[eventPara1-100] += eventPara2;
        }
        else if(eventPara1 == 1 && eventPara2 == 0){
            
            robberRandomLoss();
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

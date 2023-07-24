#include "player.h"
#include "dice.h
#include <iostream>
#include <string>
#include "gameboard.h"
using namespace std;
//replace all iostream with functions in display and notify display
void Player::turn(){
    //Set dice
    string command = "";
    cout<<"Builder "<<index<<"'s turn"<<endl;
    while(true){
        cout<<">";
        cin>>command;
        if(command == "load"){
            gb->processCommand(-1,0,0);
        }
        if(command == "roll"){
            gb->processCommand(-1,0,2);
            break;
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
        else if(eventPara1){

        }
    }
    return 0;
}

Player::Player(GameBoard *gb, int index): gb {gb}, index {index} {
    for (int i = 0; i < RESOURCETYPE; ++i) {
        resource[i] = 0;
    }
    dice_type = 0;
    d = new LoadedDice(gb, index);
}

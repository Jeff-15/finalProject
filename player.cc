#include "player.h"
#include "dice.h
#include <iostream>
#include <string>
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
    }
    return 0;
}
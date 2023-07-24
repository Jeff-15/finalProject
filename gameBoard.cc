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
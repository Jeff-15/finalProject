#include "gameBoard.h"
#include "dice.h"
#include "loadedDice.h"
#include "RandomDice.h"
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
        }
    }
}
void GameBoard::initialize() {
    // initialize dice, default random dice
    for (int i = 0; i < 4; ++i) {
        Dice* d = new LoadedDice(this, i);
    }
    return;
}

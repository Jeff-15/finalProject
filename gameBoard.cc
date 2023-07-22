#include "gameBoard.h"
#include "dice.h"
#include "loadedDice.h"
void GameBoard::processCommand(int target, int eventPara1, int eventPara2){
    if(eventPara1 == 0){
        if(eventPara2 == 0){
            d = LoadedDice{this, target};
        }
        if(eventPara2 == 2){
            diceRoll = d.generate();
        }
    }
}
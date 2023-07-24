#include "gameBoard.h"
#include "loadedDice.h"
LoadedDice::LoadedDice(GameBoard* gb,int index):Dice{gb,index}{ }
int LoadedDice::generate(){
    gb->notifyPlayer(index,-1,0);
    return gb->getInput();
}

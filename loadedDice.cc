#include "gameBoard.h"
#include "loadedDice.h"
LoadedDice::LoadedDice(GameBoard* gb,int index):gb{gb},index{index}{ }
int LoadedDice::generate(){
    gb->notifyPlayer(index,-1,-1);
    return gb->getInput();
}

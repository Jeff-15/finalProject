#include "gameboard.h"
#include "loadedDice.h"
LoadedDice::LoadedDice(){ }
int LoadedDice::generate(){
    gb->notifyPlayer(player,-1,0);
    return gb->getInput();
}

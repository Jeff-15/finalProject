#include "gameboard.h"
#include "loadedDice.h"
LoadedDice::LoadedDice(GameBoard* gb, int player):gb{gb},player{player}{}
int LoadedDice::generate(){
    gb->notifyPlayer(player,-1,0);
    return gb->getInput();
}

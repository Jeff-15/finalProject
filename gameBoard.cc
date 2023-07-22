#include "gameBoard.h"
#include "dice.h"
#include "loadedDice.h"

void GameBoard::processCommand(int target,int eventPara1, int eventPara2) { return; }
void GameBoard::initialize() {
    // initialize dice, default random dice
    for (int i = 0; i < 4; ++i) {
        Dice* d = new LoadedDice(this, i);
    }
    return;
}

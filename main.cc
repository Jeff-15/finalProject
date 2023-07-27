#include <iostream>
#include <vector>
#include "board.h"
#include "gameBoard.h"
#include "player.h"
#include "subject.h"
#include "abstractPlayer.h"

int main (int argc, char* argv[]) {
    // print_board();
    GameBoard gb = GameBoard{};
    gb.initialize();
    AbstractPlayer* p = new Player{0,&gb};
    gb.attachPlayer(p);
    gb.start();

    return 0;
}

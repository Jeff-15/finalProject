#include <iostream>
#include <vector>
#include "board.h"
#include "gameBoard.h"
#include "generateBoard.h"
#include "player.h"


int main (int argc, char* argv[]) {
    // print_board();
    GameBoard gb = RandomizedBoard{};
    gb.initialize();
    gb.attachPlayer(new Player{0,&gb});
    gb.start();

    return 0;
}

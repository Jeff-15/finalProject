#include <iostream>
#include <vector>
#include "board.h"
#include "gameBoard.h"
#include "player.h"
#include "subject.h"
#include "abstractPlayer.h"




int main (int argc, char* argv[]) {
    // print_board();
    GameBoard gb = {};
    gb.initialize();
    AbstractPlayer* p = new Player{0,&gb};
    gb.attachPlayer(p);
    AbstractPlayer* p1 = new Player{1,&gb};
    gb.attachPlayer(p1);
    AbstractPlayer* p2 = new Player{2,&gb};
    gb.attachPlayer(p2);
    AbstractPlayer* p3 = new Player{3,&gb};
    gb.attachPlayer(p3);
    
    gb.players_choose_start_index();
    gb.start();
    //during_turn_cmd(gb);

    return 0;
}


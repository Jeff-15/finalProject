#include <iostream>
#include <vector>
#include "board.h"
#include "gameBoard.h"
#include "player.h"
#include "subject.h"
#include "abstractPlayer.h"
#include <sstream>



int main (int argc, char* argv[]) {

    GameBoard gb = {};
    AbstractPlayer* p = new Player{0,&gb};
    gb.attachPlayer(p);
    AbstractPlayer* p1 = new Player{1,&gb};
    gb.attachPlayer(p1);
    AbstractPlayer* p2 = new Player{2,&gb};
    gb.attachPlayer(p2);
    AbstractPlayer* p3 = new Player{3,&gb};
    gb.attachPlayer(p3);
    if (argc == 2) {  // random board
        std::string cmd = argv[1];
        if (cmd == "-random-board") {
            gb.initialize(-1);
            gb.players_choose_start_index();
            gb.display_board();
            gb.start(0);
        }
    }
    else if (argc == 3) {
        std::string cmd = argv[1];
        if (cmd == "-seed") {
            std::string seed = argv[2];
            std::stringstream oss {seed};
            int seed_num;
            oss >> seed_num;
            gb.initialize(seed_num);
            gb.players_choose_start_index();
            gb.display_board();
            gb.start(0);  
        }
        else if (cmd == "-load") {
            size_t curr = 0;
            gb.initialize(-1);
            std::string file_name = argv[2];
            std::ifstream iss {file_name};
            gb.read_load_info(iss, curr);
            gb.display_board();
            gb.players_choose_start_index();
            gb.start(curr);
        }
        else if (cmd == "-board") {
            gb.initialize(-1);
            std::string file_name = argv[2];
            std::ifstream iss {file_name};
            gb.read_board_info(iss);
            gb.display_board();
            gb.players_choose_start_index();
            gb.start(0);
        }
    }
    else {

    }
    return 0;
}


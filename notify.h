#include <bits/stdc++.h>
#include "subject.h"
#include "board.h"
#include "gameBoard.h"
#include "player.h"

class notify {
    GameBoard* gb;

  public:
    void board(std::vector <Tile*> tiles, std::vector <Vertex*> vertices, std::vector <Edge*> edges);
    void status();
    void residence();
    void buildRoad(int builder, std::vector <Edge*> edges);
    void buildRes(int builder, std::vector <Vertex*> vertices);
    void improve(int builder, std::vector <Vertex*> vertices);
    void trade(int trader, int colour, std::string give, std::string take);
    std::string next(int builder);
    void save(int builder, std::vector <Player*> p);
    void help();
};

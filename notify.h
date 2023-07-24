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
    void buildRoad(std::string builder, std::vector <Edge*> edges);
    void buildRes(std::string builder, std::vector <Vertex*> vertices);
    void improve(std::string builder, std::vector <Vertex*> vertices);
    void trade(std::string trader, std::string colour, std::string give, std::string take);
    std::string next(std::string builder);
    void save(std::string builder, std::vector <Player*> p);
    void help();
};

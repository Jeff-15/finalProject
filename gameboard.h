//#include <bits/stdc++.h>
#include "board.h"

std::vector<int> generateNumbers();

std::vector<std::string> generateStrings();

class GameBoard {
  protected:
    int turns;                             // 0, 1, 2, 3 player's turn
    Tile* tiles;
    Vertex* vertices;
    Edge* edges;
    void roll_dice(int player_index);     // roll dice for some player
    void player_get
  public:
    virtual void initialize() = 0;
};

class RandomizedBoard : public GameBoard {
  public:
    void initialize();
};

class PresetBoard : public GameBoard {
  public:
    void initialize();
};

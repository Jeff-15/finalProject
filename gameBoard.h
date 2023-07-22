#include <bits/stdc++.h>
#include "board.h"

std::vector<int> generateNumbers();

std::vector<std::string> generateStrings();

class GameBoard {
  protected:
    Tile* tiles;
    Vertex* vertices;
    Edge* edges;

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

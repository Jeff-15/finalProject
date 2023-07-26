
#ifndef GENERATEBOARD
#define GENERATEBOARD
#include <vector>
#include "board.h"
#include "gameBoard.h"

std::vector<int> generateNumbers();

std::vector<std::string> generateStrings();

class RandomizedBoard : public GameBoard {
  public:
    RandomizedBoard();
    ~RandomizedBoard();
    void initialize();
};

class PresetBoard : public GameBoard {
  public:
    void initialize();
};

#endif

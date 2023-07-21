#include "gameBoard.h"

class RandomizedBoard: public GameBoard {
    void initializeWood();
    void initializeBrick();
    void initializeSheep();
    void initializeDesert();
    void initialzeStone();
    void initialzeRolls();
    public:
        PresetBoard(std::string file);
};



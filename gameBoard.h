#ifndef GAMEBOARD
#define GAMEBOARD
#include <vector>
#include "dice.h"
#include "subject.h"
#include "board.h"

class GameBoard: public Subject{
    virtual void initializeWood() = 0;
    virtual void initializeBrick() = 0;
    virtual void initializeSheep() = 0;
    virtual void initializeDesert() = 0;
    virtual void initialzeStone() = 0;
    virtual void initialzeRolls() = 0;
    std::vector <Dice*> d;
    std::vector <Tile*> T;
    std::vector <Vertex*> V;
    std::vector <Edge*> E;

    public: 
        void processCommand(int target,int eventPara1, int eventPara2);
        void initialize();
};

#endif
#ifndef GAMEBOARD
#define GAMEBOARD
#include <vector>
#include "subject.h"
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
        void processCommand(int event,int target);
        void initialize();
};

#endif
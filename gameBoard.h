#ifndef GAMEBOARD
#define GAMEBOARD
#include <vector>
#include "dice.h"
#include "subject.h"
class GameBoard: public Subject{
    virtual void initializeWood() = 0;
    virtual void initializeBrick() = 0;
    virtual void initializeSheep() = 0;
    virtual void initializeDesert() = 0;
    virtual void initialzeStone() = 0;
    virtual void initialzeRolls() = 0;
    std::vector <Dice*> d;
    std::vector <Tile*> d;
    std::vector <Vertex*> d;
    std::vector <Edge*> d;

    public: 
        void processCommand(int target,int eventPara1, int eventPara2);
        void initialize();
};

#endif
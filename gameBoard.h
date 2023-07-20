#ifndef GAMEBOARD
#define GAMEBOARD
#include <vector>
#include "subject.h"
class GameBoard: public Subject{
    void initializeWood();
    void initializeBrick();
    void initializeSheep();
    void initializeDesert();
    void initialzeStone();
    void initialzeRolls();
    std::vector <Dice*> d;
    std::vector <Tile*> d;
    std::vector <Vertex*> d;
    std::vector <Edge*> d;

    public: 
        void processCommand(int target,int eventPara1, int eventPara2);
        void initialize();
};

#endif
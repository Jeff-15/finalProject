#ifndef GAMEBOARD
#define GAMEBOARD
#include <vector>
#include "dice.h"
#include "subject.h"
#include "board.h"
class GameBoard: public Subject{
    void initializeWood();
    void initializeBrick();
    void initializeSheep();
    void initializeDesert();
    void initialzeStone();
    void initialzeRolls();
    std::vector <Dice*> d;
    Tile* tiles;
    Vertex* vertices;
    Edge* edges;
    Dice d;
    int diceRoll;//the result of dice roll

    public: 
        void processCommand(int target,int eventPara1, int eventPara2);
        void initialize();
};

#endif
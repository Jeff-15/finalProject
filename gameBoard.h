#ifndef GAMEBOARD
#define GAMEBOARD
#include <vector>
#include "dice.h"
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
    Dice d;
    int diceRoll;//the result of dice roll

    public: 
        void processCommand(int target,int eventPara1, int eventPara2);
        void initialize();
};

#endif
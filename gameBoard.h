#ifndef GAMEBOARD
#define GAMEBOARD
#include <vector>
#include "dice.h"
#include "subject.h"
#include "board.h"

class GameBoard: public Subject{
  protected:
    std::vector <Dice*> d;
    std::vector <Tile*> tiles;
    std::vector <Vertex*> vertices;
    std::vector <Edge*> edges;
    Dice d;
    int diceRoll;//the result of dice roll

    public: 
        void processCommand(int target,int eventPara1, int eventPara2);
        virtual void initialize() = 0;
};

#endif
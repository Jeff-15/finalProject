#include "dice.h"
#include "gameBoard.h"
class LoadedDice:public Dice{
    int index;
    GameBoard* gb;
    public:
        int generate() override;
        LoadedDice(GameBoard* gb,int index);
};
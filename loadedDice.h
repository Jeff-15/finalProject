#include "dice.h"
#include "gameBoard.h"
class LoadedDice:public Dice{
    public:
        int generate() override;
        LoadedDice();
};
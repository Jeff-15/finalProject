#include "dice.h"
#include "gameBoard.h"
class LoadedDice:public Dice{
    GameBoard* gb;
    int player;
    public:
        int generate() override;
        LoadedDice(GameBoard* gb, int player);
};
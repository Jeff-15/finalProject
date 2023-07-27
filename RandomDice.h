#include "dice.h"
#include "gameBoard.h"


class RandomDice: public Dice {
    int index;
    GameBoard* gb;
    public:
        int generate() override;
        RandomDice(GameBoard* p,int index);
};

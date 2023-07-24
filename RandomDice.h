#include "dice.h"
#include "gameBoard.h"


class RandomDice: public Dice {
    public:
        int generate() override;
        RandomDice(GameBoard* p,int index);
};

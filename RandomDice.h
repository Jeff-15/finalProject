#include "dice.h"
#include "gameBoard.h"


class RandomDice: public Dice {
    GameBoard* gb;
    int player;
    public:
        int generate() override;
        RandomDice(GameBoard* gb, int player);
};

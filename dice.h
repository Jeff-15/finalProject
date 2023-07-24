#include "gameBoard.h"
class Dice{
    protected:
        int index;
        GameBoard* gb;
    public:
        virtual int generate();
        Dice(GameBoard* gb,int index):gb{gb},index{index}{}
};

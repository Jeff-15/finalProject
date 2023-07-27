#ifndef DICE
#define DICE
class Dice{
    public:
        virtual int generate();
        //Dice(GameBoard* gb,int index):gb{gb},index{index}{}
        Dice(){}
};
#endif
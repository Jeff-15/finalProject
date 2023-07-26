#ifndef DICE
#define DICE
class Dice{
    protected:
        int index;
        GameBoard* gb;
    public:
        virtual int generate();
        //Dice(GameBoard* gb,int index):gb{gb},index{index}{}
        Dice(){}
};
#endif
#include "gameBoard.h"
class Player {
    GameBoard* gb;
    int index;
    int numPoints;
    const int RESOURCETYPE = 5;
    int resource[5];//Order: BRICK, ENERGY,GLASS, HEAT, WIFI.
    int dice_type; // 0 for loaded dice, 1 for random dice
    Dice *d;
    void turn();
    public: 
        int notify (int target, int eventPara1, int eventPara2);//see eventNumber.txt for representations
        void player_print();
        Player(GameBoard *gb, int index);
};
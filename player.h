#include "gameBoard.h"
class Player {
    GameBoard* gb;
    int index;
    int resource[5];//Order: BRICK, ENERGY,GLASS, HEAT, WIFI.
    void turn();
    public: 
        int notify (int target, int eventPara1, int eventPara2);//see eventNumber.txt for representations

};
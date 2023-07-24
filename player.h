#include "gameBoard.h"
#include <string>
class Player {
    GameBoard* gb;
    std::string player_name;
    int index;
    int numPoints;
    const int RESOURCETYPE = 5;
    int resource[5];//Order: BRICK, ENERGY,GLASS, HEAT, WIFI.
    int dice_type; // 0 for loaded dice, 1 for random dice
    Dice *d;
    void turn();
    void diceRoll();
    void robberRandomLoss();
    int randomLoss();
    int action();
    void road();
    public: 
        int notify (int target, int eventPara1, int eventPara2);//see eventNumber.txt for representations
        Player(int index, GameBoard* gb);
        void player_print();
};
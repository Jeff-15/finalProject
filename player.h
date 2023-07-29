#ifndef PLAYER
#define PLAYER
#include "gameBoard.h"
#include <string>
#include <vector>
<<<<<<< Updated upstream

class Player {
=======
#include "abstractPlayer.h"
#include "abstractDisplay.h"

class Player:public AbstractPlayer{
>>>>>>> Stashed changes
    GameBoard* gb;
    AbstractDisplay* display;
    std::string player_name;
    int index;
    int numPoints;
    const int RESOURCETYPE = 5;
    int resource[5];//Order: BRICK, ENERGY,GLASS, HEAT, WIFI.
    int dice_type; // 0 for loaded dice, 1 for random dice
    Dice *d;
    std::vector <int> roads;
    std::vector <int> basement;
    std::vector <int> house;
    std::vector <int> tower;
    void turn();
    void diceRoll();
    void robberRandomLoss();
    int randomLoss();
    int action();
    void roadConstruct(int position);//construct road
    void houseConstruct(int position);//construct house
    void improve(int position);
    void trade();
    public: 
        int notify (int target, int eventPara1, int eventPara2);//see eventNumber.txt for representations
        Player(int index, GameBoard* gb);
        void player_print();
        int* getResources();
        std::vector <int> getRoad();
        std::vector <int> getBasement();
        std::vector <int> getHouse();
        std::vector <int> getTower();
};
#endif
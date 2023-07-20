#include "gameboard.h"
class Player {
    GameBoard* gb;
    public: 
        void notify (int target, int event);
};
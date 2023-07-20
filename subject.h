#ifndef VECTOR
#define VECTOR
#include <vector>
#include "player.h"
#include "display.h"
using namespace std;
class Subject {
    protected: 
        std::vector<Player*> p;
        std::vector<Display*> d;
    public:     
        void notifyPlayer(int target, int even);
        void notifyDisplay();
        void attachPlayer(Player *p);
        void attachDisplay(Display*) = 0;
};

#endif
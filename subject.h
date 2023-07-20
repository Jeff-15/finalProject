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
        int input;//All specific number input will be done through this parameter. 
    public:     
        void notifyPlayer(int target, int event);
        void setInput(int in);
        void notifyDisplay();
        void attachPlayer(Player *p);
        void attachDisplay(Display*) = 0;
};

#endif
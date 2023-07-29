#ifndef VECTOR
#define VECTOR
#include <vector>
#include "abstractPlayer.h"
#include "abstractDisplay.h"
using namespace std;
class Subject {
    protected: 
        std::vector<AbstractPlayer*> p;
        std::vector<AbstractDisplay*> d;
        int input;//All specific number input will be done through this parameter. 
    public:     
        void notifyPlayer(int target, int eventPara1, int eventPara2);
        void setInput(int in);
        int getInput();
        void notifyDisplay(int cmd);
        void attachPlayer(AbstractPlayer *player);
        void start();
        //void attachDisplay(Display*) = 0;
};

#endif

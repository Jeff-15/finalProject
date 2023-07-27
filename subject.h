#ifndef VECTOR
#define VECTOR
#include <vector>
#include "abstractPlayer.h"
//#include "display.h"
using namespace std;
class Subject {
    protected: 
        std::vector<AbstractPlayer*> p;
        //std::vector<Display*> d;
        int input;//All specific number input will be done through this parameter. 
    public:     
        void notifyPlayer(int target, int eventPara1, int eventPara2);
        void setInput(int in);
        int getInput();
        void notifyDisplay();
        void attachPlayer(AbstractPlayer *p);
        void start();
        //void attachDisplay(Display*) = 0;
};

#endif

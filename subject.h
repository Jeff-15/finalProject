#ifndef VECTOR
#define VECTOR
#include <vector>
#include "player.h"
//#include "display.h"
using namespace std;
class Subject {
    protected: 
<<<<<<< Updated upstream
        std::vector<Player*> p;
        //std::vector<Display*> d;
=======
        std::vector<AbstractPlayer*> p;
        AbstractDisplay* d;
>>>>>>> Stashed changes
        int input;//All specific number input will be done through this parameter. 
    public:     
        void notifyPlayer(int target, int eventPara1, int eventPara2);
        void setInput(int in);
        int getInput();
        void notifyDisplay();
        void attachPlayer(Player *p);
        void start();
        //void attachDisplay(Display*) = 0;
};

#endif

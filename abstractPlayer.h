#ifndef ABSTRACTPLAYER
#define ABSTRACTPLAYER
#include <vector>
class AbstractPlayer{
    public:
        virtual int notify (int target, int eventPara1, int eventPara2)=0;//see eventNumber.txt for representations
        virtual void player_print()=0;
        virtual int* getResources()=0;
};
#endif
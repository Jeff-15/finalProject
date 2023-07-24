#ifndef GAMEBOARD
#define GAMEBOARD
#include <vector>
#include "dice.h"
#include "subject.h"
#include "board.h"

class GameBoard: public Subject{
    Dice dice;
    int diceRoll;//the result of dice roll
    void processDice(int index);
    void processGeese(int tileIndex,int index);//place geese at position tileIndex:: To do
    //call notifyPlayer(index,-1,0)(choosing steal target)
    //response in input
    //call notifyPlayer(targetindex,1,2)(target index is in int input)
    void player_get_resource();

    void constructRoad(int target, int edgeIndex);
    //May throw error (string: )

    protected:
        std::vector <Dice*> d;
        std::vector <Tile*> d;
        std::vector <Vertex*> d;
        std::vector <Edge*> d;
    
    

    public: 
        void processCommand(int target,int eventPara1, int eventPara2);
        
        virtual void initialize();
        int GEESELIMIT = 7;
};

#endif

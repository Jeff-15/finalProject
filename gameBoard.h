#ifndef GAMEBOARD
#define GAMEBOARD
#include <vector>
#include <string>
#include "dice.h"
#include "subject.h"
#include "board.h"

class GameBoard: public Subject{
    Dice dice;
    int diceRoll;//the result of dice roll
    protected:
        std::vector <Tile*> t;
        std::vector <Vertex*> v;
        std::vector <Edge*> e;
        void player_get_resource ();  // get val from diceRoll
        int name_to_index(std::string player_name); // convert name to index
        std::string index_to_name(int player_index); // convert index to name
        int get_resource_code(std::string s);     // convert resource s to code
        void processGeese(int tileIndex, int index); // notifyPlayer(player_index, -1, 0)
    public:
        void processCommand(int target,int eventPara1, int eventPara2);
        virtual void initialize();
        int GEESELIMIT = 7;
};

#endif

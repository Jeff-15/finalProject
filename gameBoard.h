#ifndef GBOARD
#define GBOARD
#include <vector>
#include <string>
#include "dice.h"
#include "subject.h"
#include "board.h"
#include <iostream>

class GameBoard: public Subject{
    protected:
        Dice dice;
        int diceRoll;//the result of dice roll
        void processDice(int index);
        void processGeese(int tileIndex,int index);//place geese at position tileIndex:: To do
        //call notifyPlayer(index,-1,0)(choosing steal target)
        //response in input
        //call notifyPlayer(targetindex,1,2)(target index is in int input)
        void player_get_resource(std::string player_name);

        void constructRoad(int player_id, int edgeIndex);
        //May throw error (string: )
        //throw "Already build";
        //throw "No neighbour";
        // have to garantee player has sufficient money
        
        void build_residence(int player_id, int vertexIndex);
        void improve_residence(int vertexIndex);
        ////////////////////////////////////////////////

        std::vector <Tile*> tiles;
        std::vector <Vertex*> vertices;
        std::vector <Edge*> edges;
        void player_get_resource ();                 // get val from diceRoll
        int name_to_index(std::string player_name);  // convert name to index EX) R -> 0
        std::string index_to_name(int player_index); // convert index to name ex) 0 -> R
        int get_resource_code(std::string s);        // convert resource s to code, ex) brick -> 100
        void processGeese(int tileIndex, int index, std::string activePlayer); // notifyPlayer(player_index, -1, 0)
        std::string convert_short_to_full_name(std::string sh);        // ex) R -> Red    
        void processTrade(int index, int target, int process);              
    public:
        void processCommand(int target,int eventPara1, int eventPara2);
        void initialize();
        int GEESELIMIT = 7;
        GameBoard();
        GameBoard(std::vector <Tile*> t, std::vector <Vertex*> v, std::vector <Edge*> e);
};

#endif

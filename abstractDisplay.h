#ifndef ABDISPLAY
#define ABDISPLAY
#include <vector>
#include <string>
#include "abstractPlayer.h"
#include "board.h"

class AbstractDisplay {
    public:
        virtual void invalid() = 0;
        virtual void buildFail() = 0;
        virtual void insufficient() = 0;
        virtual void begin(int builder) = 0;
        virtual void end() = 0;
        virtual void loadedDice() = 0; 
        virtual void invalidRoll() = 0;
        virtual void next(int builder) = 0;
        virtual void gain(std::vector <AbstractPlayer*> p, std::vector <int> num, std::string type) = 0;
        virtual void noGain() = 0;
        virtual void geeseSteal(std::vector <AbstractPlayer*> p, std::vector <std::vector <std::pair <int, std::string>> > resourcesLost) = 0;
        virtual void placeGeese() = 0;
        virtual void chooseSteal(int builder, std::vector <std::string> builders) = 0;
        virtual void steal(int builder, int stolen, std::string resource) = 0;
        virtual void noSteal(int builder) = 0;
        virtual void status(int builder, int numPoints, int* resources) = 0;
        virtual void residence(int builder, std::vector <AbstractPlayer*> p) = 0;
        virtual void trade(int builder, std::string colour, std::string give, std::string take) = 0; 
        virtual void save(int builder, std::vector <AbstractPlayer*> p, std::vector <Tile*> tiles) = 0;
        virtual void help() = 0; 
        virtual void board(std::vector <Tile*> tiles, std::vector <Vertex*> vertices, std::vector <Edge*> edges) = 0;
        ~AbstractDisplay(){}
};


#endif

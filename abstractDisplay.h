#ifndef ABDISPLAY
#define ABDISPLAY
#include <vector>
#include <string>
#include "player.h"

class AbstactDisplay {
    public:
        virtual void invalid() = 0;
        virtual void buildFail() = 0;
        virtual void insufficient() = 0;
        virtual void begin(int builder) = 0;
        virtual void end() = 0;
        virtual void loadedDice() = 0; 
        virtual void invalidRoll() = 0;
        virtual void next(int builder) = 0;
        virtual void gain(std::vector <Player*> p, std::vector <int> num, std::string type) = 0;
        virtual void noGain() = 0;
        virtual void geeseSteal(std::vector <Player*> p, std::vector <std::vector <std::pair <int, std::string>> > resourcesLost) = 0;
        virtual void placeGeese() = 0;
        virtual void chooseSteal(int builder, std::vector <Player*> p) = 0;
        virtual void steal(int builder, int stolen, std::string resource) = 0;
        virtual void noSteal(int builder) = 0;
        virtual void status(int builder, std::vector <Player*> p) = 0;
        virtual void residence(int builder, std::vector <Player*> p) = 0;
        virtual void trade(int builder, std::string colour, std::string give, std::string take) = 0; 
        virtual void save(int builder, std::vector <Player*> p, std::vector <Tile*> tiles) = 0;
        virtual void help() = 0; 
        virtual void board(std::vector <Tile*> tiles, std::vector <Vertex*> vertices, std::vector <Edge*> edges) = 0;
};


#endif

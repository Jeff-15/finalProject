#ifndef DISPLAY
#define DISPLAY
#include "subject.h"
#include "board.h"
#include "gameBoard.h"
#include "player.h"

class display {
    GameBoard* gb;

  public:
    void invalid();
    // Invalid command. \n

    void buildFail();
    // You cannot build here. \n

    void insufficient();
    // You do not have enough resources. \n

    void begin(int builder);
    // Builder <colour>, where do you want to build a basement? \n

    void end();
    // Would you like play again? \n

    void loadedDice(); 
    // Input a roll between 2 and 12: \n

    void invalidRoll();
    // Invalid roll. \n

    void next(int builder);
    // Builder <colour>’s turn. \n

    void gain(std::vector <Player*> p, std::vector <int> num, std::string type);
    // Builder <colour> gained: \n
    // <numResource> <resourceType> \n

    void noGain();
    // No builders gained resources. \n

    void geeseSteal(std::vector <Player*> p, std::vector <std::vector <std::pair <int, std::string>> > resourcesLost);
    // Builder <colour> loses <numResourcesLost> resources to the geese. They lose: \n
    // <numResource> <resourceName> \n

    void placeGeese();
    // Choose where to place the GEESE. \n

    void chooseSteal(int builder, std::vector <Player*> p);
    // Builder <colour1> can choose to steal from [builders]. \n
    // Choose a builder to steal from.

    void steal(int builder, int stolen, std::string resource);
    // Builder <colour1> steals <resource> from builder <colour2>. \n

    void noSteal(int builder);
    // Builder <colour1> has no builders to steal from. \n

    void status(int builder, std::vector <Player*> p);
    // <colour> has <numPoints> building points, <numBrick> brick, <numEnergy> energy,
    // <numGlass> glass, <numHeat> heat, and <numWiFi> WiFi. \n

    void residence(int builder, std::vector <Player*> p);
    // <colour> has built: \n
    // <vertex> <buildingType> \n

    void trade(int builder, std::string colour, std::string give, std::string take); 
    // <colour1> offers <colour2> one <resource1> for one <resource2>. \n
    // Does <colour2> accept this offer? \n

    void save(int builder, std::vector <Player*> p, std::vector <Tile*> tiles);
    // <curTurn> \n
    // <builder0Data> \n
    // <builder1Data> \n
    // <builder2Data> \n
    // <builder3Data> \n
    // <board> \n
    // <geese> \n

    void help(); 
    // Valid commands: \n
    // board \n
    // status \n
    // residences \n
    // build-road <edge#> \n
    // build-res <housing#> \n
    // improve <housing#> \n
    // trade <colour> <give> <take> \n
    // next \n
    // save <file> \n
    // help \n
    
    void board(std::vector <Tile*> tiles, std::vector <Vertex*> vertices, std::vector <Edge*> edges); 
    // prints the board.
};

#endif

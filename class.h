#include <iostream>
#include <vector>
#include "board.h"

class Display {
    public:
        virtual void notify() = 0;
};

class TextDisplay: public Display {
    GameBoard* gb;
    public:
        void notify();

};

class Player {
    GameBoard* gb;
    public: 
        void notify ();
};


class TextDisplay: public Display {
    GameBoard *gb;
    public:
        void notify();
};

class GameBoard {
    void initializeWood();
    void initializeBrick();
    void initializeSheep();
    void initializeDesert();
    void initialzeStone();
    void initialzeRolls();
    std::vector <Dice*> d;
    std::vector <Tile*> d;
    std::vector <Vertex*> d;
    std::vector <Edge*> d;

    public: 
        void processCommand(int event,int target);
        void initialize();
};


class Dice {
    public:
        virtual int generate() = 0;
        virtual int roll() = 0;
};

class RandomDice: public Dice {
    public:
        int roll() override;
};

class LoadedDice: public Dice {
    public:
        int roll() override;
};

class PresetBoard: public GameBoard {
    void initializeWood();
    void initializeBrick();
    void initializeSheep();
    void initializeDesert();
    void initialzeStone();
    void initialzeRolls();
    public: 
        PresetBoard ();
};


class RandomizedBoard: public GameBoard {
    void initializeWood();
    void initializeBrick();
    void initializeSheep();
    void initializeDesert();
    void initialzeStone();
    void initialzeRolls();
    public:
        RandomizedBoard();
};

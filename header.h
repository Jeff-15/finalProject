#include <iostream>
#include <vector>

class Subject {
    protected: 
        std::vector<Player*> p;
        std::vector<Display*> d;
    public:     
        virtual void notifyPlayer(int target, int even) = 0;
        virtual void notifyDisplay() = 0;
        virtual void attachPlayer(Player *p) = 0;
        virtual void detachPlayer(int target) = 0;
        virtual void attachDisplay(Display*) = 0;
        virtual void detachDisplay(int target) = 0;
};

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
    Dice* d;
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

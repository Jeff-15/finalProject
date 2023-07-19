#include <iostream>
#include <vector>

class Subject {
    protected: 
        std::vector<Player*> p;
        std::vector<Display*> d;
    public:     

};

class Player {
    GameBoard* gb;
    public: 
        void notify () {

        }
};

class Display {
    public:
        virtual void notify() = 0;
};

class TextDisplay {

};

class GameBoard {
    public: 
        void processCommand(int event,int target) {

        }
};

void print_board() {
    std::cout << "I love Jeff" << std::endl;
}


int main (int argc, char* argv[]) {

    std::cout << "Hello World" << std::endl;
    print_board();
    return 0;
}

#include <bits/stdc++.h>
#include "board.h"

// Methods in Tile
void Tile::printNum() const { 
    if (num < 10) std::cout << ' ' << num; 
    else std::cout << num;
}

void Tile::printType() const { std::cout << type; }

void Tile::printVal() const { std::cout << val; }

bool Tile::occupy() const { return goose; }

int Tile::getVal() { return val; }

std::string Tile::getType() {return type; }

int Tile::getLength() { return type.length(); }

void Tile::setNum(int num) { this->num = num; }

void Tile::setType(std::string type) { this->type = type; }

void Tile::setVal(int val) { this->val = val; }

void Tile::setStatus(bool goose) { this->goose = goose; }


// Methods in Vertex
void Vertex::printNum() const { 
    if (num < 10) std::cout << ' ' << num; 
    else std::cout << num;
}

void Vertex::printOwner() const { std::cout << owner; }

bool Vertex::own() const { return occupy; }

void Vertex::setNum(int num) { this->num = num; }

void Vertex::setStatus (bool occupy) { this->occupy = occupy; }

void Vertex::setOwner(std::string owner) { this->owner = owner; }


// Methods in Edge
void Edge::printNum() const { 
    if (num < 10) std::cout << ' ' << num; 
    else std::cout << num;
}
void Edge::printOwner() { std::cout << owner; }
bool Edge::own() { return occupy; }
void Edge::setNum(int num) { this->num = num; }
void Edge::setStatus (bool occupy) { this->occupy = occupy; }
void Edge::setOwner(std::string owner) { this->owner = owner; }



std::vector<int> generateNumbers() {
    // Create a vector with the exact counts of each number
    std::vector<int> numbers = {2, 3, 3, 4, 4, 5, 5, 6, 6, 8, 8, 9, 9, 10, 10, 11, 11, 12};

    // Create a random generator
    std::mt19937 rng(std::random_device{}()); 

    // Shuffle the vector to randomize the order of the numbers
    std::shuffle(numbers.begin(), numbers.end(), rng);

    return numbers;
}

std::vector<std::string> generateStrings() {
    // Create a vector with the exact counts of each string
    std::vector<std::string> strings = {"PARK", "BRICK", "BRICK", "BRICK", "BRICK", 
                                        "ENERGY", "ENERGY", "ENERGY", "ENERGY",
                                        "GLASS", "GLASS", "GLASS", "GLASS",
                                        "HEAT", "HEAT", "HEAT",
                                        "WIFI", "WIFI", "WIFI"};

    // Create a random generator
    std::mt19937 rng(std::random_device{}()); 

    // Shuffle the vector to randomize the order of the strings
    std::shuffle(strings.begin(), strings.end(), rng);

    return strings;
}


void printGameBoard(/* This function will consumer three paremeters: Tile *tiles, Vertex *vertices, 
                    Edge *edges to get the information to be printed*/) {
    const int goose = 7;
    const int tileNum = 19;
    const int vertexNum = 54;
    const int edgeNum = 72;
    Tile tiles [tileNum];
    Vertex vertices [vertexNum];
    Edge edges [edgeNum];
    std::vector<int> randomNumber = generateNumbers();
    std::vector<std::string> randomString = generateStrings();
    for (int i = 0; i < tileNum; ++i) {
        tiles[i].setNum(i);
        tiles[i].setType(randomString.back());
        if (randomString.back() == "PARK") {
            randomString.pop_back();
            tiles[i].setVal(goose);
            tiles[i].setStatus(true);
        } else {
            randomString.pop_back();
            tiles[i].setVal(randomNumber.back());
            randomNumber.pop_back();
            tiles[i].setStatus(false);
        }
    }
    for (int i = 0; i < vertexNum; ++i) {
        vertices[i].setNum(i);
        vertices[i].setStatus(false);
        vertices[i].setOwner("");
    }
    for (int i = 0; i < edgeNum; ++i) {
        edges[i].setNum(i);
        edges[i].setStatus(false);
        edges[i].setOwner("");
    }
    // Initialization for display temporarily. Would be deleted later.


    // print line 1.
    std::cout << std::string(20, ' ');
    std::cout << '|';
    if (vertices[0].own()) {
        vertices[0].printOwner();
    } else {
        vertices[0].printNum();
    }
    std::cout << "|--";
    if (edges[0].own()) {
        edges[0].printOwner();
    } else {
        edges[0].printNum();
    }
    std::cout << "--|";
    if (vertices[1].own()) {
        vertices[1].printOwner();
    } else {
        vertices[1].printNum();
    }
    std::cout << '|' << std::endl;

    // prints line 2.
    std::cout << std::string(22, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 3.
    std::cout << std::string(21, ' ');
    if (edges[1].own()) {
        edges[1].printOwner();
    } else {
        edges[1].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[0].printNum();
    std::cout << std::string(3, ' ');
    if (edges[2].own()) {
        edges[2].printOwner();
    } else {
        edges[2].printNum();
    }
    std::cout << std::endl;

    // prints line 4.
    std::cout << std::string(22, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[0].printType();
    std::cout << std::string(7 - tiles[0].getLength(), ' ');
    std::cout << '|' << std::endl;

    // prints line 5.
    std::cout << std::string(10, ' ');  
    std::cout << '|';
    if (vertices[2].own()) {
        vertices[2].printOwner();
    } else {
        vertices[2].printNum();
    }
    std::cout << "|--";
    if (edges[3].own()) {
        edges[3].printOwner();
    } else {
        edges[3].printNum();
    }
    std::cout << "--|";
    if (vertices[3].own()) {
        vertices[3].printOwner();
    } else {
        vertices[3].printNum();
    }
    std::cout << '|';
    if (tiles[0].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[0].getVal() < 10) std::cout << ' ';
        tiles[0].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[4].own()) {
        vertices[4].printOwner();
    } else {
        vertices[4].printNum();
    }
    std::cout << "|--";
    if (edges[4].own()) {
        edges[4].printOwner();
    } else {
        edges[4].printNum();
    }
    std::cout << "--|";
    if (vertices[5].own()) {
        vertices[5].printOwner();
    } else {
        vertices[5].printNum();
    }
    std::cout << '|' << std::endl;

    // prints line 6.
    std::cout << std::string(12, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 7.
    std::cout << std::string(11, ' ');
    if (edges[5].own()) {
        edges[5].printOwner();
    } else {
        edges[5].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[1].printNum();
    std::cout << std::string(3, ' ');
    if (edges[6].own()) {
        edges[6].printOwner();
    } else {
        edges[6].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[7].own()) {
        edges[7].printOwner();
    } else {
        edges[7].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[2].printNum();
    std::cout << std::string(3, ' ');
    if (edges[8].own()) {
        edges[8].printOwner();
    } else {
        edges[8].printNum();
    }
    std::cout << std::endl;

    // prints line 8.
    std::cout << std::string(12, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[1].printType();
    std::cout << std::string(7 - tiles[1].getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[1].printType();
    std::cout << std::string(7 - tiles[1].getLength(), ' ');
    std::cout << '|' << std::endl;

    // prints line 9.
    std::cout << '|';
    if (vertices[6].own()) {
        vertices[6].printOwner();
    } else {
        vertices[6].printNum();
    }
    std::cout << "|--";
    if (edges[9].own()) {
        edges[9].printOwner();
    } else {
        edges[9].printNum();
    }
    std::cout << "--|";
    if (vertices[7].own()) {
        vertices[7].printOwner();
    } else {
        vertices[7].printNum();
    }
    std::cout << '|';
    if (tiles[1].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[1].getVal() < 10) std::cout << ' ';
        tiles[1].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[8].own()) {
        vertices[8].printOwner();
    } else {
        vertices[8].printNum();
    }
    std::cout << "|--";
    if (edges[10].own()) {
        edges[10].printOwner();
    } else {
        edges[10].printNum();
    }
    std::cout << "--|";
    if (vertices[9].own()) {
        vertices[9].printOwner();
    } else {
        vertices[9].printNum();
    }
    std::cout << '|';
    if (tiles[2].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[2].getVal() < 10) std::cout << ' ';
        tiles[2].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[10].own()) {
        vertices[10].printOwner();
    } else {
        vertices[10].printNum();
    }
    std::cout << "|--";
    if (edges[11].own()) {
        edges[11].printOwner();
    } else {
        edges[11].printNum();
    }
    std::cout << "--|";
    if (vertices[11].own()) {
        vertices[11].printOwner();
    } else {
        vertices[11].printNum();
    }
    std::cout << '|' << std::endl;

    // prints line 10.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 11.
    std::cout << ' ';
    if (edges[12].own()) {
        edges[12].printOwner();
    } else {
        edges[12].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[3].printNum();
    std::cout << std::string(3, ' ');
    if (edges[13].own()) {
        edges[13].printOwner();
    } else {
        edges[13].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[14].own()) {
        edges[14].printOwner();
    } else {
        edges[14].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[4].printNum();
    std::cout << std::string(3, ' ');
    if (edges[15].own()) {
        edges[15].printOwner();
    } else {
        edges[15].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[16].own()) {
        edges[16].printOwner();
    } else {
        edges[16].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[4].printNum();
    std::cout << std::string(3, ' ');
    if (edges[17].own()) {
        edges[17].printOwner();
    } else {
        edges[17].printNum();
    }
    std::cout << std::endl;

    // prints line 12.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[3].printType();
    std::cout << std::string(7 - tiles[3].getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[4].printType();
    std::cout << std::string(7 - tiles[4].getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[4].printType();
    std::cout << std::string(7 - tiles[4].getLength(), ' ');
    std::cout << '|' << std::endl;

    // prints line 13.
    std::cout << '|';
    if (vertices[12].own()) {
        vertices[12].printOwner();
    } else {
        vertices[12].printNum();
    }
    std::cout << '|';
    if (tiles[3].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[3].getVal() < 10) std::cout << ' ';
        tiles[3].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[13].own()) {
        vertices[13].printOwner();
    } else {
        vertices[13].printNum();
    }
    std::cout << "|--";
    if (edges[18].own()) {
        edges[18].printOwner();
    } else {
        edges[18].printNum();
    }
    std::cout << "--|";
    if (vertices[14].own()) {
        vertices[14].printOwner();
    } else {
        vertices[14].printNum();
    }
    std::cout << '|';
    if (tiles[4].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[4].getVal() < 10) std::cout << ' ';
        tiles[4].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[15].own()) {
        vertices[15].printOwner();
    } else {
        vertices[15].printNum();
    }
    std::cout << "|--";
    if (edges[19].own()) {
        edges[19].printOwner();
    } else {
        edges[19].printNum();
    }
    std::cout << "--|";
    if (vertices[16].own()) {
        vertices[16].printOwner();
    } else {
        vertices[16].printNum();
    }
    std::cout << '|';
    if (tiles[5].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[5].getVal() < 10) std::cout << ' ';
        tiles[5].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[17].own()) {
        vertices[17].printOwner();
    } else {
        vertices[17].printNum();
    }
    std::cout << '|' << std::endl;

    // prints line 14.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 15.
    std::cout << std::endl;

    // prints line 16.
    std::cout << std::endl;

    // prints line 17.
    std::cout << std::endl;

    // prints line 18.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 19.
    std::cout << std::endl;

    // prints line 20.
    std::cout << std::endl;

    // prints line 21.
    std::cout << std::endl;

    // prints line 22.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

     // prints line 23.
    std::cout << std::endl;

    // prints line 24.
    std::cout << std::endl;

    // prints line 25.
    std::cout << std::endl;

    // prints line 26.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 27.
    std::cout << std::endl;

    // prints line 28.
    std::cout << std::endl;

    // prints line 29.
    std::cout << std::endl;

    // prints line 30.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 31.
    std::cout << std::endl;

    // prints line 32.
    std::cout << std::endl;

    // prints line 33.
    std::cout << std::endl;

    // prints line 34.
    std::cout << std::string(12, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 35.
    std::cout << std::endl;

    // prints line 36.
    std::cout << std::endl;

    // prints line 37.
    std::cout << std::endl;

    // prints line 38.
    std::cout << std::string(22, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 39.
    std::cout << std::string(21, ' ');
    if (edges[69].own()) {
        edges[69].printOwner();
    } else {
        edges[69].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[70].own()) {
        edges[70].printOwner();
    } else {
        edges[70].printNum();
    }
    std::cout << std::endl;

    // prints line 40.
    std::cout << std::string(22, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 41.
    std::cout << std::string(20, ' ');
    std::cout << '|';
    if (vertices[52].own()) {
        vertices[52].printOwner();
    } else {
        vertices[52].printNum();
    }
    std::cout << "|--";
    if (edges[71].own()) {
        edges[71].printOwner();
    } else {
        edges[71].printNum();
    }
    std::cout << "--|";
    if (vertices[53].own()) {
        vertices[53].printOwner();
    } else {
        vertices[53].printNum();
    }
    std::cout << '|' << std::endl;

}

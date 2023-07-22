//#include <bits/stdc++.h>
#include "board.h"
#include <random>


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



void printBoard(Tile* tiles, Vertex* vertices, Edge* edges) { 
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
    tiles[2].printType();
    std::cout << std::string(7 - tiles[2].getLength(), ' ');
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
    tiles[5].printNum();
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
    tiles[5].printType();
    std::cout << std::string(7 - tiles[5].getLength(), ' ');
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
    std::cout << ' ';
    if (edges[20].own()) {
        edges[20].printOwner();
    } else {
        edges[20].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[21].own()) {
        edges[21].printOwner();
    } else {
        edges[21].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[6].printNum();
    std::cout << std::string(3, ' ');
    if (edges[22].own()) {
        edges[22].printOwner();
    } else {
        edges[22].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[23].own()) {
        edges[23].printOwner();
    } else {
        edges[23].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[7].printNum();
    std::cout << std::string(3, ' ');
    if (edges[24].own()) {
        edges[24].printOwner();
    } else {
        edges[24].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[25].own()) {
        edges[25].printOwner();
    } else {
        edges[25].printNum();
    }
    std::cout << std::endl;

    // prints line 16.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[6].printType();
    std::cout << std::string(7 - tiles[6].getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[7].printType();
    std::cout << std::string(7 - tiles[7].getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 17.
    std::cout << '|';
    if (vertices[18].own()) {
        vertices[18].printOwner();
    } else {
        vertices[18].printNum();
    }
    std::cout << "|--";
    if (edges[26].own()) {
        edges[26].printOwner();
    } else {
        edges[26].printNum();
    }
    std::cout << "--|";
    if (vertices[19].own()) {
        vertices[19].printOwner();
    } else {
        vertices[19].printNum();
    }
    std::cout << '|';
    if (tiles[6].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[6].getVal() < 10) std::cout << ' ';
        tiles[6].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[20].own()) {
        vertices[20].printOwner();
    } else {
        vertices[20].printNum();
    }
    std::cout << "|--";
    if (edges[27].own()) {
        edges[27].printOwner();
    } else {
        edges[27].printNum();
    }
    std::cout << "--|";
    if (vertices[21].own()) {
        vertices[21].printOwner();
    } else {
        vertices[21].printNum();
    }
    std::cout << '|';
    if (tiles[7].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[7].getVal() < 10) std::cout << ' ';
        tiles[7].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[22].own()) {
        vertices[22].printOwner();
    } else {
        vertices[22].printNum();
    }
    std::cout << "|--";
    if (edges[28].own()) {
        edges[28].printOwner();
    } else {
        edges[28].printNum();
    }
    std::cout << "--|";
    if (vertices[23].own()) {
        vertices[23].printOwner();
    } else {
        vertices[23].printNum();
    }
    std::cout << '|' << std::endl;

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
    std::cout << ' ';
    if (edges[29].own()) {
        edges[29].printOwner();
    } else {
        edges[29].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[8].printNum();
    std::cout << std::string(3, ' ');
    if (edges[30].own()) {
        edges[30].printOwner();
    } else {
        edges[30].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[31].own()) {
        edges[31].printOwner();
    } else {
        edges[31].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[9].printNum();
    std::cout << std::string(3, ' ');
    if (edges[32].own()) {
        edges[32].printOwner();
    } else {
        edges[32].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[33].own()) {
        edges[33].printOwner();
    } else {
        edges[33].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[10].printNum();
    std::cout << std::string(3, ' ');
    if (edges[34].own()) {
        edges[34].printOwner();
    } else {
        edges[34].printNum();
    }
    std::cout << std::endl;

    // prints line 20.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[8].printType();
    std::cout << std::string(7 - tiles[8].getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[9].printType();
    std::cout << std::string(7 - tiles[9].getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[10].printType();
    std::cout << std::string(7 - tiles[10].getLength(), ' ');
    std::cout << '|' << std::endl;

    // prints line 21.
    std::cout << '|';
    if (vertices[24].own()) {
        vertices[24].printOwner();
    } else {
        vertices[24].printNum();
    }
    std::cout << '|';
    if (tiles[8].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[8].getVal() < 10) std::cout << ' ';
        tiles[8].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[25].own()) {
        vertices[25].printOwner();
    } else {
        vertices[25].printNum();
    }
    std::cout << "|--";
    if (edges[35].own()) {
        edges[35].printOwner();
    } else {
        edges[35].printNum();
    }
    std::cout << "--|";
    if (vertices[26].own()) {
        vertices[26].printOwner();
    } else {
        vertices[26].printNum();
    }
    std::cout << '|';
    if (tiles[9].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[9].getVal() < 10) std::cout << ' ';
        tiles[9].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[27].own()) {
        vertices[27].printOwner();
    } else {
        vertices[27].printNum();
    }
    std::cout << "|--";
    if (edges[36].own()) {
        edges[36].printOwner();
    } else {
        edges[36].printNum();
    }
    std::cout << "--|";
    if (vertices[28].own()) {
        vertices[28].printOwner();
    } else {
        vertices[28].printNum();
    }
    std::cout << '|';
    if (tiles[10].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[10].getVal() < 10) std::cout << ' ';
        tiles[10].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[29].own()) {
        vertices[29].printOwner();
    } else {
        vertices[29].printNum();
    }
    std::cout << '|' << std::endl;

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
    std::cout << ' ';
    if (edges[37].own()) {
        edges[37].printOwner();
    } else {
        edges[37].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[38].own()) {
        edges[38].printOwner();
    } else {
        edges[38].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[11].printNum();
    std::cout << std::string(3, ' ');
    if (edges[39].own()) {
        edges[39].printOwner();
    } else {
        edges[39].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[40].own()) {
        edges[40].printOwner();
    } else {
        edges[40].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[12].printNum();
    std::cout << std::string(3, ' ');
    if (edges[41].own()) {
        edges[41].printOwner();
    } else {
        edges[41].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[42].own()) {
        edges[42].printOwner();
    } else {
        edges[42].printNum();
    }
    std::cout << std::endl;

    // prints line 24.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[11].printType();
    std::cout << std::string(7 - tiles[11].getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[12].printType();
    std::cout << std::string(7 - tiles[12].getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 25.
    std::cout << '|';
    if (vertices[30].own()) {
        vertices[30].printOwner();
    } else {
        vertices[30].printNum();
    }
    std::cout << "|--";
    if (edges[43].own()) {
        edges[43].printOwner();
    } else {
        edges[43].printNum();
    }
    std::cout << "--|";
    if (vertices[31].own()) {
        vertices[31].printOwner();
    } else {
        vertices[31].printNum();
    }
    std::cout << '|';
    if (tiles[11].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[11].getVal() < 10) std::cout << ' ';
        tiles[11].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[32].own()) {
        vertices[32].printOwner();
    } else {
        vertices[32].printNum();
    }
    std::cout << "|--";
    if (edges[44].own()) {
        edges[44].printOwner();
    } else {
        edges[44].printNum();
    }
    std::cout << "--|";
    if (vertices[33].own()) {
        vertices[33].printOwner();
    } else {
        vertices[33].printNum();
    }
    std::cout << '|';
    if (tiles[12].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[12].getVal() < 10) std::cout << ' ';
        tiles[12].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[34].own()) {
        vertices[34].printOwner();
    } else {
        vertices[34].printNum();
    }
    std::cout << "|--";
    if (edges[45].own()) {
        edges[45].printOwner();
    } else {
        edges[45].printNum();
    }
    std::cout << "--|";
    if (vertices[35].own()) {
        vertices[35].printOwner();
    } else {
        vertices[35].printNum();
    }
    std::cout << '|' << std::endl;

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
    std::cout << ' ';
    if (edges[46].own()) {
        edges[46].printOwner();
    } else {
        edges[46].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[13].printNum();
    std::cout << std::string(3, ' ');
    if (edges[47].own()) {
        edges[47].printOwner();
    } else {
        edges[47].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[48].own()) {
        edges[48].printOwner();
    } else {
        edges[48].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[14].printNum();
    std::cout << std::string(3, ' ');
    if (edges[49].own()) {
        edges[49].printOwner();
    } else {
        edges[49].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[50].own()) {
        edges[50].printOwner();
    } else {
        edges[50].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[15].printNum();
    std::cout << std::string(3, ' ');
    if (edges[51].own()) {
        edges[51].printOwner();
    } else {
        edges[51].printNum();
    }
    std::cout << std::endl;

    // prints line 28.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[13].printType();
    std::cout << std::string(7 - tiles[13].getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[14].printType();
    std::cout << std::string(7 - tiles[14].getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[15].printType();
    std::cout << std::string(7 - tiles[15].getLength(), ' ');
    std::cout << '|' << std::endl;

    // prints line 29.
    std::cout << '|';
    if (vertices[36].own()) {
        vertices[36].printOwner();
    } else {
        vertices[36].printNum();
    }
    std::cout << '|';
    if (tiles[13].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[13].getVal() < 10) std::cout << ' ';
        tiles[13].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[37].own()) {
        vertices[37].printOwner();
    } else {
        vertices[37].printNum();
    }
    std::cout << "|--";
    if (edges[52].own()) {
        edges[52].printOwner();
    } else {
        edges[52].printNum();
    }
    std::cout << "--|";
    if (vertices[38].own()) {
        vertices[38].printOwner();
    } else {
        vertices[38].printNum();
    }
    std::cout << '|';
    if (tiles[14].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[14].getVal() < 10) std::cout << ' ';
        tiles[14].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[39].own()) {
        vertices[39].printOwner();
    } else {
        vertices[39].printNum();
    }
    std::cout << "|--";
    if (edges[53].own()) {
        edges[53].printOwner();
    } else {
        edges[53].printNum();
    }
    std::cout << "--|";
    if (vertices[40].own()) {
        vertices[40].printOwner();
    } else {
        vertices[40].printNum();
    }
    std::cout << '|';
    if (tiles[15].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[15].getVal() < 10) std::cout << ' ';
        tiles[15].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[41].own()) {
        vertices[41].printOwner();
    } else {
        vertices[41].printNum();
    }
    std::cout << '|' << std::endl;

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
    std::cout << ' ';
    if (edges[54].own()) {
        edges[54].printOwner();
    } else {
        edges[54].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[55].own()) {
        edges[55].printOwner();
    } else {
        edges[55].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[16].printNum();
    std::cout << std::string(3, ' ');
    if (edges[56].own()) {
        edges[56].printOwner();
    } else {
        edges[56].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[57].own()) {
        edges[57].printOwner();
    } else {
        edges[57].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[17].printNum();
    std::cout << std::string(3, ' ');
    if (edges[58].own()) {
        edges[58].printOwner();
    } else {
        edges[58].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[59].own()) {
        edges[59].printOwner();
    } else {
        edges[59].printNum();
    }
    std::cout << std::endl;

    // prints line 32.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[16].printType();
    std::cout << std::string(7 - tiles[16].getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[17].printType();
    std::cout << std::string(7 - tiles[17].getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 33.
    std::cout << '|';
    if (vertices[42].own()) {
        vertices[42].printOwner();
    } else {
        vertices[42].printNum();
    }
    std::cout << "|--";
    if (edges[60].own()) {
        edges[60].printOwner();
    } else {
        edges[60].printNum();
    }
    std::cout << "--|";
    if (vertices[43].own()) {
        vertices[43].printOwner();
    } else {
        vertices[43].printNum();
    }
    std::cout << '|';
    if (tiles[16].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[16].getVal() < 10) std::cout << ' ';
        tiles[16].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[44].own()) {
        vertices[44].printOwner();
    } else {
        vertices[44].printNum();
    }
    std::cout << "|--";
    if (edges[61].own()) {
        edges[61].printOwner();
    } else {
        edges[61].printNum();
    }
    std::cout << "--|";
    if (vertices[45].own()) {
        vertices[45].printOwner();
    } else {
        vertices[45].printNum();
    }
    std::cout << '|';
    if (tiles[17].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[17].getVal() < 10) std::cout << ' ';
        tiles[17].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[46].own()) {
        vertices[46].printOwner();
    } else {
        vertices[46].printNum();
    }
    std::cout << "|--";
    if (edges[62].own()) {
        edges[62].printOwner();
    } else {
        edges[62].printNum();
    }
    std::cout << "--|";
    if (vertices[47].own()) {
        vertices[47].printOwner();
    } else {
        vertices[47].printNum();
    }
    std::cout << '|' << std::endl;

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
    std::cout << std::string(11, ' ');
    if (edges[63].own()) {
        edges[63].printOwner();
    } else {
        edges[63].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[64].own()) {
        edges[64].printOwner();
    } else {
        edges[64].printNum();
    }
    std::cout << std::string(3, ' ');
    tiles[18].printNum();
    std::cout << std::string(3, ' ');
    if (edges[65].own()) {
        edges[65].printOwner();
    } else {
        edges[65].printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges[66].own()) {
        edges[66].printOwner();
    } else {
        edges[66].printNum();
    }
    std::cout << std::endl;

    // prints line 36.
    std::cout << std::string(12, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles[18].printType();
    std::cout << std::string(7 - tiles[18].getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 37.
    std::cout << std::string(10, ' ');  
    std::cout << '|';
    if (vertices[48].own()) {
        vertices[48].printOwner();
    } else {
        vertices[48].printNum();
    }
    std::cout << "|--";
    if (edges[67].own()) {
        edges[67].printOwner();
    } else {
        edges[67].printNum();
    }
    std::cout << "--|";
    if (vertices[49].own()) {
        vertices[49].printOwner();
    } else {
        vertices[49].printNum();
    }
    std::cout << '|';
    if (tiles[18].getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles[18].getVal() < 10) std::cout << ' ';
        tiles[18].printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices[50].own()) {
        vertices[50].printOwner();
    } else {
        vertices[50].printNum();
    }
    std::cout << "|--";
    if (edges[68].own()) {
        edges[68].printOwner();
    } else {
        edges[68].printNum();
    }
    std::cout << "--|";
    if (vertices[51].own()) {
        vertices[51].printOwner();
    } else {
        vertices[51].printNum();
    }
    std::cout << '|' << std::endl;

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

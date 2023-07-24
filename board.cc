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

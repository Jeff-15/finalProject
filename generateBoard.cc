#include <bits/stdc++.h>
#include "board.h"
#include "generateBoard.h"
#include "gameBoard.h"

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

void RandomizedBoard::initialize() {
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
    this->tiles = tiles;
    this->vertices = vertices;
    this->edges = edges;
}

void PresetBoard::initialize() {

}

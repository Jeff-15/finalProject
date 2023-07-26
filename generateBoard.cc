
#include "board.h"
#include "generateBoard.h"
#include "gameBoard.h"
#include <random>
#include <chrono>
#include <string>

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
    std::vector<int> randomNumber = generateNumbers();
    std::vector<std::string> randomString = generateStrings();
    for (int i = 0; i < tileNum; ++i) {
        tiles.at(i)->setNum(i);
        tiles.at(i)->setType(randomString.back());
        if (randomString.back() == "PARK") {
            randomString.pop_back();
            tiles.at(i)->setVal(goose);
            tiles.at(i)->setStatus(true);
        } else {
            randomString.pop_back();
            tiles.at(i)->setVal(randomNumber.back());
            randomNumber.pop_back();
            tiles.at(i)->setStatus(false);
        }
        tiles.at(i)->setVertex(i);
        tiles.at(i)->setEdge(i);
    }
    for (int i = 0; i < vertexNum; ++i) {
        vertices.at(i)->setNum(i);
        vertices.at(i)->setStatus(false);
        vertices.at(i)->setOwner("");
        vertices.at(i)->setVertex(i);
        vertices.at(i)->setEdge(i);
    }
    for (int i = 0; i < edgeNum; ++i) {
        edges.at(i)->setNum(i);
        edges.at(i)->setStatus(false);
        edges.at(i)->setOwner("");
        edges.at(i)->setVertex(i);
        edges.at(i)->setEdge(i);
    }
}

void PresetBoard::initialize() {
    
}


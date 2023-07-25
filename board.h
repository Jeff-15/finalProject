#ifndef BOARD
#define BOARD
#include <bits/stdc++.h>
#include "gameBoard.h"

class Tile {
    int num;
    std::string type;
    int val;
    bool goose;
    std::vector <int> neighbourVertex;
    std::vector <int> neighbourEdge;

  public:
    void printNum() const;
    void printType() const;
    void printVal() const;
    bool occupy() const;
    int getNum() const;
    std::string getType() const;
    int getLength() const;
    int getVal() const;
    bool getGoose() const;
    std::vector <int> getNeighbourVertex() const;
    std::vector <int> getNeighbourEdge() const;
    void setNum(int num);
    void setType(std::string type);
    void setVal(int val);
    void setStatus(bool goose);
    void setVertex(int num);
    void setEdge(int num);
};

class Vertex {
    int num;
    bool occupy;
    std::string owner; // Can be either B (Blue), R (Red), O (Orange), Y (Yellow).
    std::string level; // Can be either B (Basement), T (Tower), H (House).
    std::vector <int> neighbourVertex;
    std::vector <int> neighbourEdge;

  public:
    void printNum() const;
    void printOwner() const;
    bool own() const;
    int getNum() const;
    std::string getOwner() const;
    std::string getLevel() const;
    std::vector <int> getNeighbourVertex() const;
    std::vector <int> getNeighbourEdge() const;
    void setNum(int num);
    void setStatus (bool occupy);
    void setOwner(std::string owner);
    void setVertex(int num);
    void setEdge(int num);
};

class Edge {
    int num;
    bool occupy; // Can be either B (Blue), R (Red), O (Orange), Y (Yellow).
    std::string owner;
    std::vector <int> neighbourVertex;
    std::vector <int> neighbourEdge;

  public:
    void printNum() const;
    void printOwner() const;
    bool own() const;
    int getNum() const;
    std::string getOwner() const;
    std::vector <int> getNeighbourVertex() const;
    std::vector <int> getNeighbourEdge() const;    
    void setNum(int num);
    void setStatus(bool occupy);
    void setOwner(std::string owner);
    void setVertex(int num);
    void setEdge(int num);
};

#endif

#include <bits/stdc++.h>

class Tile {
    int num;
    std::string type;
    int val;
    bool goose;

  public:
    void printNum() const;
    void printType() const;
    void printVal() const;
    bool occupy() const;
    int getVal();
    std::string getType();
    int getLength();
    void setNum(int num);
    void setType(std::string type);
    void setVal(int val);
    void setStatus(bool goose);
};

class Vertex {
    int num;
    bool occupy;
    std::string owner;

  public:
    void printNum() const;
    void printOwner() const;
    bool own() const;
    void setNum(int num);
    void setStatus (bool occupy);
    void setOwner(std::string owner);
};

class Edge {
    int num;
    bool occupy;
    std::string owner;

  public:
    void printNum() const;
    void printOwner();
    bool own();
    void setNum(int num);
    void setStatus(bool occupy);
    void setOwner(std::string owner);
};

void printBoard(Tile* tiles, Vertex* vertices, Edge* edges);

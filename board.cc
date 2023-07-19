#include <bits/stdc++.h>

class Tile {
    int num;
    std::string type;
    int val;
    bool goose;

  public:
    void printNum() const { std::cout << num; }
    void printType() const { std::cout << type; }
    void printVal() const { std::cout << val; }
    bool occupy() const { return goose; }
    void setNum(int num) { this->num = num; }
    void setType(std::string type) { this->type = type; }
    void setVal(int val) { this->val = val; }
    void setStatus(bool goose) { this->goose = goose; }
};

class Vertex {
    int num;
    bool occupy;
    std::string owner;

  public:
    void printNum() const { std::cout << num; }
    void printOwner() const { std::cout << owner; }
    bool own() const { return occupy; }
    void setNum(int num) { this->num = num; }
    void setStatus (bool occupy) { this->occupy = occupy; }
    void setOwner(std::string owner) { this->owner = owner; }
};

class Edge {
    int num;
    bool occupy;
    std::string owner;

  public:
    void printNum() { std::cout << num; }
    void printOwner() { std::cout << owner; }
    bool own() { return occupy; }
    void setNum(int num) { this->num = num; }
    void setStatus (bool occupy) { this->occupy = occupy; }
    void setOwner(std::string owner) { this->owner = owner; }
};



void printGameBoard() {
    const int tileNum = 19;
    const int vertexNum = 54;
    const int edgeNum = 72;
    Tile tiles [tileNum];
    Vertex vertices [vertexNum];
    Edge edges [edgeNum];
    for (int i = 0; i < tileNum; ++i) {
        tiles[i].setNum(i);
        tiles[i].setType("");
        tiles[i].setVal(i);
        tiles[i].setStatus(false);
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
    
    // print line 1.
    std::cout << std::string(20, ' ');
    std::cout << '|';
    if (vertices[0].occupy) {
        std::cout << vertices[0].owner;
    } else {
        std::cout << ' ' << vertices[0].num;
    }
    std::cout << "|--";
    if (edges[0].occupy) {
        std::cout << ' ' << edges[0].owner;
    } else {
        std::cout << ' ' << edges[0].num;
    }
    std::cout << "--|";
    if (vertices[1].occupy) {
        std::cout << vertices[1].owner;
    } else {
        std::cout << ' ' << vertices[1].num;
    }
    std::cout << '|' << std::endl;

    // prints line 2.
    std::cout << std::string(22, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 3.
    std::cout << std::string(21, ' ');
    if (edges[1].occupy) {
        std::cout << ' ' << edges[1].owner;
    } else {
        std::cout << ' ' << edges[1].num;
    }
    std::cout << std::string(3, ' ');
    std::cout << ' ' << tiles[0].num;
    std::cout << std::string(3, ' ');
    if (edges[2].occupy) {
        std::cout << ' ' << edges[2].owner;
    } else {
        std::cout << ' ' << edges[2].num;
    }
    std::cout << std::endl;

    // prints line 4.
    std::cout << std::string(22, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    std::cout << tiles[0].type;
    std::cout << std::string(7 - tiles[0].type.length(), ' ');
    std::cout << '|' << std::endl;

    // prints line 5.
    std::cout << std::string(10, ' ');  
    std::cout << '|';
    if (vertices[2].occupy) {
        std::cout << vertices[2].owner;
    } else {
        std::cout << ' ' << vertices[2].num;
    }
    std::cout << "|--";
    if (edges[3].occupy) {
        std::cout << ' ' << edges[3].owner;
    } else {
        std::cout << ' ' << edges[3].num;
    }
    std::cout << "--|";
    if (vertices[3].occupy) {
        std::cout << vertices[3].owner;
    } else {
        std::cout << ' ' << vertices[3].num;
    }
    std::cout << '|';
    std::cout << std::string(2, ' ');
    if (tiles[0].val < 10) std::cout << ' ';
    std::cout << tiles[0].val;
    std::cout << std::string(2, ' ');
    std::cout << '|';
    if (vertices[4].occupy) {
        std::cout << vertices[4].owner;
    } else {
        std::cout << ' ' << vertices[4].num;
    }
    std::cout << "|--";
    if (edges[4].occupy) {
        std::cout << ' ' << edges[4].owner;
    } else {
        std::cout << ' ' << edges[4].num;
    }
    std::cout << "--|";
    if (vertices[5].occupy) {
        std::cout << vertices[5].owner;
    } else {
        std::cout << ' ' << vertices[5].num;
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
    if (edges[5].occupy) {
        std::cout << ' ' << edges[5].owner;
    } else {
        std::cout << ' ' << edges[5].num;
    }
    std::cout << std::string(3, ' ');
    std::cout << ' ' << tiles[1].num;
    std::cout << std::string(3, ' ');
    if (edges[6].occupy) {
        std::cout << ' ' << edges[6].owner;
    } else {
        std::cout << ' ' << edges[6].num;
    }
    std::cout << std::string(8, ' ');
    if (edges[7].occupy) {
        std::cout << ' ' << edges[7].owner;
    } else {
        std::cout << ' ' << edges[7].num;
    }
    std::cout << std::string(3, ' ');
    std::cout << ' ' << tiles[2].num;
    std::cout << std::string(3, ' ');
    if (edges[8].occupy) {
        std::cout << ' ' << edges[8].owner;
    } else {
        std::cout << ' ' << edges[8].num;
    }
    std::cout << std::endl;

    // prints line 8.
    std::cout << std::string(12, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    std::cout << tiles[1].type;
    std::cout << std::string(7 - tiles[1].type.length(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    std::cout << tiles[1].type;
    std::cout << std::string(7 - tiles[1].type.length(), ' ');
    std::cout << '|' << std::endl;

    // prints line 9.
    std::cout << '|';
    if (vertices[6].occupy) {
        std::cout << vertices[6].owner;
    } else {
        std::cout << ' ' << vertices[6].num;
    }
    std::cout << "|--";
    if (edges[9].occupy) {
        std::cout << ' ' << edges[9].owner;
    } else {
        std::cout << ' ' << edges[9].num;
    }
    std::cout << "--|";
    if (vertices[7].occupy) {
        std::cout << vertices[7].owner;
    } else {
        std::cout << ' ' << vertices[7].num;
    }
    std::cout << '|';
    std::cout << std::string(2, ' ');
    if (tiles[1].val < 10) std::cout << ' ';
    std::cout << tiles[1].val;
    std::cout << std::string(2, ' ');
    std::cout << '|';
    if (vertices[8].occupy) {
        std::cout << vertices[8].owner;
    } else {
        std::cout << ' ' << vertices[8].num;
    }
    std::cout << "|--";
    if (edges[10].occupy) {
        std::cout << ' ' << edges[10].owner;
    } else {
        std::cout << edges[10].num;
    }
    std::cout << "--|";
    if (vertices[9].occupy) {
        std::cout << vertices[9].owner;
    } else {
        std::cout << ' ' << vertices[9].num;
    }
    std::cout << '|';
    std::cout << std::string(2, ' ');
    if (tiles[2].val < 10) std::cout << ' ';
    std::cout << tiles[1].val;
    std::cout << std::string(2, ' ');
    std::cout << '|';
    if (vertices[10].occupy) {
        std::cout << vertices[10].owner;
    } else {
        std::cout << vertices[10].num;
    }
    std::cout << "|--";
    if (edges[11].occupy) {
        std::cout << ' ' << edges[11].owner;
    } else {
        std::cout << edges[11].num;
    }
    std::cout << "--|";
    if (vertices[11].occupy) {
        std::cout << vertices[11].owner;
    } else {
        std::cout << vertices[11].num;
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
    if (edges[12].occupy) {
        std::cout << ' ' << edges[12].owner;
    } else {
        std::cout << edges[12].num;
    }
    std::cout << std::string(3, ' ');
    std::cout << ' ' << tiles[3].num;
    std::cout << std::string(3, ' ');
    if (edges[13].occupy) {
        std::cout << ' ' << edges[13].owner;
    } else {
        std::cout << edges[13].num;
    }
    std::cout << std::string(8, ' ');
    if (edges[14].occupy) {
        std::cout << ' ' << edges[14].owner;
    } else {
        std::cout << edges[14].num;
    }
    std::cout << std::string(3, ' ');
    std::cout << ' ' << tiles[4].num;
    std::cout << std::string(3, ' ');
    if (edges[15].occupy) {
        std::cout << ' ' << edges[15].owner;
    } else {
        std::cout << edges[15].num;
    }
    std::cout << std::string(8, ' ');
    if (edges[16].occupy) {
        std::cout << ' ' << edges[16].owner;
    } else {
        std::cout << edges[16].num;
    }
    std::cout << std::string(3, ' ');
    std::cout << ' ' << tiles[4].num;
    std::cout << std::string(3, ' ');
    if (edges[17].occupy) {
        std::cout << ' ' << edges[17].owner;
    } else {
        std::cout << edges[17].num;
    }
    std::cout << std::endl;

    // prints line 12.
    std::cout << std::endl;

    // prints line 13.
    std::cout << std::endl;

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
    if (edges[69].occupy) {
        std::cout << ' ' << edges[69].owner;
    } else {
        std::cout << edges[69].num;
    }
    std::cout << std::string(8, ' ');
    if (edges[70].occupy) {
        std::cout << ' ' << edges[70].owner;
    } else {
        std::cout << edges[70].num;
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
    if (vertices[52].occupy) {
        std::cout << vertices[52].owner;
    } else {
        std::cout << vertices[52].num;
    }
    std::cout << "|--";
    if (edges[71].occupy) {
        std::cout << ' ' << edges[71].owner;
    } else {
        std::cout << edges[71].num;
    }
    std::cout << "--|";
    if (vertices[53].occupy) {
        std::cout << vertices[53].owner;
    } else {
        std::cout << vertices[53].num;
    }
    std::cout << '|' << std::endl;

}


int main() {
    printGameBoard();


    return 0;
}
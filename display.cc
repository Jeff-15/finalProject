#include <bits/stdc++.h>
#include "display.h"

void notify::board(std::vector <Tile*> tiles, std::vector <Vertex*> vertices, std::vector <Edge*> edges) { 
    // print line 1.
    std::cout << std::string(20, ' ');
    std::cout << '|';
    if (vertices.at(0)->own()) {
        vertices.at(0)->printOwner();
        vertices.at(0)->printLevel();
    } else {
        vertices.at(0)->printNum();
    }
    std::cout << "|--";
    if (edges.at(0)->own()) {
        edges.at(0)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(0)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(1)->own()) {
        vertices.at(1)->printOwner();
        vertices.at(1)->printLevel();
    } else {
        vertices.at(1)->printNum();
    }
    std::cout << '|' << std::endl;

    // prints line 2.
    std::cout << std::string(22, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 3.
    std::cout << std::string(21, ' ');
    if (edges.at(1)->own()) {
        edges.at(1)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(1)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(0)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(2)->own()) {
        edges.at(2)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(2)->printNum();
    }
    std::cout << std::endl;

    // prints line 4.
    std::cout << std::string(22, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(0)->printType();
    std::cout << std::string(7 - tiles.at(0)->getLength(), ' ');
    std::cout << '|' << std::endl;

    // prints line 5.
    std::cout << std::string(10, ' ');  
    std::cout << '|';
    if (vertices.at(2)->own()) {
        vertices.at(2)->printOwner();
        vertices.at(2)->printLevel();
    } else {
        vertices.at(2)->printNum();
    }
    std::cout << "|--";
    if (edges.at(3)->own()) {
        edges.at(3)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(3)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(3)->own()) {
        vertices.at(3)->printOwner();
        vertices.at(3)->printLevel();
    } else {
        vertices.at(3)->printNum();
    }
    std::cout << '|';
    if (tiles.at(0)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(0)->getVal() < 10) std::cout << ' ';
        tiles.at(0)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(4)->own()) {
        vertices.at(4)->printOwner();
        vertices.at(4)->printLevel();
    } else {
        vertices.at(4)->printNum();
    }
    std::cout << "|--";
    if (edges.at(4)->own()) {
        edges.at(4)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(4)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(5)->own()) {
        vertices.at(5)->printOwner();
        vertices.at(5)->printLevel();
    } else {
        vertices.at(5)->printNum();
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
    if (edges.at(5)->own()) {
        edges.at(5)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(5)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(1)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(6)->own()) {
        edges.at(6)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(6)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(7)->own()) {
        edges.at(7)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(7)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(2)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(8)->own()) {
        edges.at(8)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(8)->printNum();
    }
    std::cout << std::endl;

    // prints line 8.
    std::cout << std::string(12, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(1)->printType();
    std::cout << std::string(7 - tiles.at(1)->getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(2)->printType();
    std::cout << std::string(7 - tiles.at(2)->getLength(), ' ');
    std::cout << '|' << std::endl;

    // prints line 9.
    std::cout << '|';
    if (vertices.at(6)->own()) {
        vertices.at(6)->printOwner();
        vertices.at(6)->printLevel();
    } else {
        vertices.at(6)->printNum();
    }
    std::cout << "|--";
    if (edges.at(9)->own()) {
        edges.at(9)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(9)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(7)->own()) {
        vertices.at(7)->printOwner();
        vertices.at(7)->printLevel();
    } else {
        vertices.at(7)->printNum();
    }
    std::cout << '|';
    if (tiles.at(1)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(1)->getVal() < 10) std::cout << ' ';
        tiles.at(1)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(8)->own()) {
        vertices.at(8)->printOwner();
        vertices.at(8)->printLevel();
    } else {
        vertices.at(8)->printNum();
    }
    std::cout << "|--";
    if (edges.at(10)->own()) {
        edges.at(10)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(10)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(9)->own()) {
        vertices.at(9)->printOwner();
        vertices.at(9)->printLevel();
    } else {
        vertices.at(9)->printNum();
    }
    std::cout << '|';
    if (tiles.at(2)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(2)->getVal() < 10) std::cout << ' ';
        tiles.at(2)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(10)->own()) {
        vertices.at(10)->printOwner();
        vertices.at(10)->printLevel();
    } else {
        vertices.at(10)->printNum();
    }
    std::cout << "|--";
    if (edges.at(11)->own()) {
        edges.at(11)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(11)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(11)->own()) {
        vertices.at(11)->printOwner();
        vertices.at(11)->printLevel();
    } else {
        vertices.at(11)->printNum();
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
    if (edges.at(12)->own()) {
        edges.at(12)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(12)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(3)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(13)->own()) {
        edges.at(13)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(13)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(14)->own()) {
        edges.at(14)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(14)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(4)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(15)->own()) {
        edges.at(15)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(15)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(16)->own()) {
        edges.at(16)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(16)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(5)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(17)->own()) {
        edges.at(17)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(17)->printNum();
    }
    std::cout << std::endl;

    // prints line 12.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(3)->printType();
    std::cout << std::string(7 - tiles.at(3)->getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(4)->printType();
    std::cout << std::string(7 - tiles.at(4)->getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(5)->printType();
    std::cout << std::string(7 - tiles.at(5)->getLength(), ' ');
    std::cout << '|' << std::endl;

    // prints line 13.
    std::cout << '|';
    if (vertices.at(12)->own()) {
        vertices.at(12)->printOwner();
        vertices.at(12)->printLevel();
    } else {
        vertices.at(12)->printNum();
    }
    std::cout << '|';
    if (tiles.at(3)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(3)->getVal() < 10) std::cout << ' ';
        tiles.at(3)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(13)->own()) {
        vertices.at(13)->printOwner();
        vertices.at(13)->printLevel();
    } else {
        vertices.at(13)->printNum();
    }
    std::cout << "|--";
    if (edges.at(18)->own()) {
        edges.at(18)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(18)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(14)->own()) {
        vertices.at(14)->printOwner();
        vertices.at(14)->printLevel();
    } else {
        vertices.at(14)->printNum();
    }
    std::cout << '|';
    if (tiles.at(4)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(4)->getVal() < 10) std::cout << ' ';
        tiles.at(4)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(15)->own()) {
        vertices.at(15)->printOwner();
        vertices.at(15)->printLevel();
    } else {
        vertices.at(15)->printNum();
    }
    std::cout << "|--";
    if (edges.at(19)->own()) {
        edges.at(19)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(19)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(16)->own()) {
        vertices.at(16)->printOwner();
        vertices.at(16)->printLevel();
    } else {
        vertices.at(16)->printNum();
    }
    std::cout << '|';
    if (tiles.at(5)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(5)->getVal() < 10) std::cout << ' ';
        tiles.at(5)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(17)->own()) {
        vertices.at(17)->printOwner();
        vertices.at(17)->printLevel();
    } else {
        vertices.at(17)->printNum();
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
    if (edges.at(20)->own()) {
        edges.at(20)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(20)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(21)->own()) {
        edges.at(21)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(21)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(6)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(22)->own()) {
        edges.at(22)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(22)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(23)->own()) {
        edges.at(23)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(23)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(7)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(24)->own()) {
        edges.at(24)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(24)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(25)->own()) {
        edges.at(25)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(25)->printNum();
    }
    std::cout << std::endl;

    // prints line 16.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(6)->printType();
    std::cout << std::string(7 - tiles.at(6)->getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(7)->printType();
    std::cout << std::string(7 - tiles.at(7)->getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 17.
    std::cout << '|';
    if (vertices.at(18)->own()) {
        vertices.at(18)->printOwner();
        vertices.at(18)->printLevel();
    } else {
        vertices.at(18)->printNum();
    }
    std::cout << "|--";
    if (edges.at(26)->own()) {
        edges.at(26)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(26)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(19)->own()) {
        vertices.at(19)->printOwner();
        vertices.at(19)->printLevel();
    } else {
        vertices.at(19)->printNum();
    }
    std::cout << '|';
    if (tiles.at(6)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(6)->getVal() < 10) std::cout << ' ';
        tiles.at(6)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(20)->own()) {
        vertices.at(20)->printOwner();
        vertices.at(20)->printLevel();
    } else {
        vertices.at(20)->printNum();
    }
    std::cout << "|--";
    if (edges.at(27)->own()) {
        edges.at(27)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(27)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(21)->own()) {
        vertices.at(21)->printOwner();
        vertices.at(21)->printLevel();
    } else {
        vertices.at(21)->printNum();
    }
    std::cout << '|';
    if (tiles.at(7)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(7)->getVal() < 10) std::cout << ' ';
        tiles.at(7)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(22)->own()) {
        vertices.at(22)->printOwner();
        vertices.at(22)->printLevel();
    } else {
        vertices.at(22)->printNum();
    }
    std::cout << "|--";
    if (edges.at(28)->own()) {
        edges.at(28)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(28)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(23)->own()) {
        vertices.at(23)->printOwner();
        vertices.at(23)->printLevel();
    } else {
        vertices.at(23)->printNum();
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
    if (edges.at(29)->own()) {
        edges.at(29)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(29)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(8)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(30)->own()) {
        edges.at(30)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(30)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(31)->own()) {
        edges.at(31)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(31)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(9)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(32)->own()) {
        edges.at(32)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(32)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(33)->own()) {
        edges.at(33)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(33)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(10)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(34)->own()) {
        edges.at(34)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(34)->printNum();
    }
    std::cout << std::endl;

    // prints line 20.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(8)->printType();
    std::cout << std::string(7 - tiles.at(8)->getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(9)->printType();
    std::cout << std::string(7 - tiles.at(9)->getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(10)->printType();
    std::cout << std::string(7 - tiles.at(10)->getLength(), ' ');
    std::cout << '|' << std::endl;

    // prints line 21.
    std::cout << '|';
    if (vertices.at(24)->own()) {
        vertices.at(24)->printOwner();
        vertices.at(24)->printLevel();
    } else {
        vertices.at(24)->printNum();
    }
    std::cout << '|';
    if (tiles.at(8)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(8)->getVal() < 10) std::cout << ' ';
        tiles.at(8)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(25)->own()) {
        vertices.at(25)->printOwner();
        vertices.at(25)->printLevel();
    } else {
        vertices.at(25)->printNum();
    }
    std::cout << "|--";
    if (edges.at(35)->own()) {
        edges.at(35)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(35)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(26)->own()) {
        vertices.at(26)->printOwner();
        vertices.at(26)->printLevel();
    } else {
        vertices.at(26)->printNum();
    }
    std::cout << '|';
    if (tiles.at(9)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(9)->getVal() < 10) std::cout << ' ';
        tiles.at(9)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(27)->own()) {
        vertices.at(27)->printOwner();
        vertices.at(27)->printLevel();
    } else {
        vertices.at(27)->printNum();
    }
    std::cout << "|--";
    if (edges.at(36)->own()) {
        edges.at(36)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(36)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(28)->own()) {
        vertices.at(28)->printOwner();
        vertices.at(28)->printLevel();
    } else {
        vertices.at(28)->printNum();
    }
    std::cout << '|';
    if (tiles.at(10)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(10)->getVal() < 10) std::cout << ' ';
        tiles.at(10)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(29)->own()) {
        vertices.at(29)->printOwner();
        vertices.at(29)->printLevel();
    } else {
        vertices.at(29)->printNum();
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
    if (edges.at(37)->own()) {
        edges.at(37)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(37)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(38)->own()) {
        edges.at(38)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(38)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(11)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(39)->own()) {
        edges.at(39)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(39)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(40)->own()) {
        edges.at(40)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(40)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(12)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(41)->own()) {
        edges.at(41)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(41)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(42)->own()) {
        edges.at(42)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(42)->printNum();
    }
    std::cout << std::endl;

    // prints line 24.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(11)->printType();
    std::cout << std::string(7 - tiles.at(11)->getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(12)->printType();
    std::cout << std::string(7 - tiles.at(12)->getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 25.
    std::cout << '|';
    if (vertices.at(30)->own()) {
        vertices.at(30)->printOwner();
        vertices.at(30)->printLevel();
    } else {
        vertices.at(30)->printNum();
    }
    std::cout << "|--";
    if (edges.at(43)->own()) {
        edges.at(43)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(43)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(31)->own()) {
        vertices.at(31)->printOwner();
        vertices.at(31)->printLevel();
    } else {
        vertices.at(31)->printNum();
    }
    std::cout << '|';
    if (tiles.at(11)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(11)->getVal() < 10) std::cout << ' ';
        tiles.at(11)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(32)->own()) {
        vertices.at(32)->printOwner();
        vertices.at(32)->printLevel();
    } else {
        vertices.at(32)->printNum();
    }
    std::cout << "|--";
    if (edges.at(44)->own()) {
        edges.at(44)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(44)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(33)->own()) {
        vertices.at(33)->printOwner();
        vertices.at(33)->printLevel();
    } else {
        vertices.at(33)->printNum();
    }
    std::cout << '|';
    if (tiles.at(12)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(12)->getVal() < 10) std::cout << ' ';
        tiles.at(12)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(34)->own()) {
        vertices.at(34)->printOwner();
        vertices.at(34)->printLevel();
    } else {
        vertices.at(34)->printNum();
    }
    std::cout << "|--";
    if (edges.at(45)->own()) {
        edges.at(45)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(45)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(35)->own()) {
        vertices.at(35)->printOwner();
        vertices.at(35)->printLevel();
    } else {
        vertices.at(35)->printNum();
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
    if (edges.at(46)->own()) {
        edges.at(46)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(46)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(13)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(47)->own()) {
        edges.at(47)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(47)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(48)->own()) {
        edges.at(48)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(48)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(14)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(49)->own()) {
        edges.at(49)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(49)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(50)->own()) {
        edges.at(50)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(50)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(15)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(51)->own()) {
        edges.at(51)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(51)->printNum();
    }
    std::cout << std::endl;

    // prints line 28.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(13)->printType();
    std::cout << std::string(7 - tiles.at(13)->getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(14)->printType();
    std::cout << std::string(7 - tiles.at(14)->getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(15)->printType();
    std::cout << std::string(7 - tiles.at(15)->getLength(), ' ');
    std::cout << '|' << std::endl;

    // prints line 29.
    std::cout << '|';
    if (vertices.at(36)->own()) {
        vertices.at(36)->printOwner();
        vertices.at(36)->printLevel();
    } else {
        vertices.at(36)->printNum();
    }
    std::cout << '|';
    if (tiles.at(13)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(13)->getVal() < 10) std::cout << ' ';
        tiles.at(13)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(37)->own()) {
        vertices.at(37)->printOwner();
        vertices.at(37)->printLevel();
    } else {
        vertices.at(37)->printNum();
    }
    std::cout << "|--";
    if (edges.at(52)->own()) {
        edges.at(52)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(52)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(38)->own()) {
        vertices.at(38)->printOwner();
        vertices.at(38)->printLevel();
    } else {
        vertices.at(38)->printNum();
    }
    std::cout << '|';
    if (tiles.at(14)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(14)->getVal() < 10) std::cout << ' ';
        tiles.at(14)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(39)->own()) {
        vertices.at(39)->printOwner();
        vertices.at(39)->printLevel();
    } else {
        vertices.at(39)->printNum();
    }
    std::cout << "|--";
    if (edges.at(53)->own()) {
        edges.at(53)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(53)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(40)->own()) {
        vertices.at(40)->printOwner();
        vertices.at(40)->printLevel();
    } else {
        vertices.at(40)->printNum();
    }
    std::cout << '|';
    if (tiles.at(15)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(15)->getVal() < 10) std::cout << ' ';
        tiles.at(15)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(41)->own()) {
        vertices.at(41)->printOwner();
        vertices.at(41)->printLevel();
    } else {
        vertices.at(41)->printNum();
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
    if (edges.at(54)->own()) {
        edges.at(54)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(54)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(55)->own()) {
        edges.at(55)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(55)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(16)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(56)->own()) {
        edges.at(56)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(56)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(57)->own()) {
        edges.at(57)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(57)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(17)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(58)->own()) {
        edges.at(58)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(58)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(59)->own()) {
        edges.at(59)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(59)->printNum();
    }
    std::cout << std::endl;

    // prints line 32.
    std::cout << std::string(2, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(16)->printType();
    std::cout << std::string(7 - tiles.at(16)->getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(17)->printType();
    std::cout << std::string(7 - tiles.at(17)->getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 33.
    std::cout << '|';
    if (vertices.at(42)->own()) {
        vertices.at(42)->printOwner();
        vertices.at(42)->printLevel();
    } else {
        vertices.at(42)->printNum();
    }
    std::cout << "|--";
    if (edges.at(60)->own()) {
        edges.at(60)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(60)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(43)->own()) {
        vertices.at(43)->printOwner();
        vertices.at(43)->printLevel();
    } else {
        vertices.at(43)->printNum();
    }
    std::cout << '|';
    if (tiles.at(16)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(16)->getVal() < 10) std::cout << ' ';
        tiles.at(16)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(44)->own()) {
        vertices.at(44)->printOwner();
        vertices.at(44)->printLevel();
    } else {
        vertices.at(44)->printNum();
    }
    std::cout << "|--";
    if (edges.at(61)->own()) {
        edges.at(61)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(61)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(45)->own()) {
        vertices.at(45)->printOwner();
        vertices.at(45)->printLevel();
    } else {
        vertices.at(45)->printNum();
    }
    std::cout << '|';
    if (tiles.at(17)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(17)->getVal() < 10) std::cout << ' ';
        tiles.at(17)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(46)->own()) {
        vertices.at(46)->printOwner();
        vertices.at(46)->printLevel();
    } else {
        vertices.at(46)->printNum();
    }
    std::cout << "|--";
    if (edges.at(62)->own()) {
        edges.at(62)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(62)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(47)->own()) {
        vertices.at(47)->printOwner();
        vertices.at(47)->printLevel();
    } else {
        vertices.at(47)->printNum();
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
    if (edges.at(63)->own()) {
        edges.at(63)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(63)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(64)->own()) {
        edges.at(64)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(64)->printNum();
    }
    std::cout << std::string(3, ' ');
    tiles.at(18)->printNum();
    std::cout << std::string(3, ' ');
    if (edges.at(65)->own()) {
        edges.at(65)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(65)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(66)->own()) {
        edges.at(66)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(66)->printNum();
    }
    std::cout << std::endl;

    // prints line 36.
    std::cout << std::string(12, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|';
    std::cout << std::string(2, ' ');
    tiles.at(18)->printType();
    std::cout << std::string(7 - tiles.at(18)->getLength(), ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 37.
    std::cout << std::string(10, ' ');  
    std::cout << '|';
    if (vertices.at(48)->own()) {
        vertices.at(48)->printOwner();
        vertices.at(48)->printLevel();
    } else {
        vertices.at(48)->printNum();
    }
    std::cout << "|--";
    if (edges.at(67)->own()) {
        edges.at(67)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(67)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(49)->own()) {
        vertices.at(49)->printOwner();
        vertices.at(49)->printLevel();
    } else {
        vertices.at(49)->printNum();
    }
    std::cout << '|';
    if (tiles.at(18)->getType() != "PARK") {
        std::cout << std::string(2, ' ');
        if (tiles.at(18)->getVal() < 10) std::cout << ' ';
        tiles.at(18)->printVal();
        std::cout << std::string(2, ' ');
    } else {
        std::cout << std::string(6, ' ');
    }
    std::cout << '|';
    if (vertices.at(50)->own()) {
        vertices.at(50)->printOwner();
        vertices.at(50)->printLevel();
    } else {
        vertices.at(50)->printNum();
    }
    std::cout << "|--";
    if (edges.at(68)->own()) {
        edges.at(68)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(68)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(51)->own()) {
        vertices.at(51)->printOwner();
        vertices.at(51)->printLevel();
    } else {
        vertices.at(51)->printNum();
    }
    std::cout << '|' << std::endl;

    // prints line 38.
    std::cout << std::string(22, ' ');
    std::cout << '|';
    std::cout << std::string(9, ' ');
    std::cout << '|' << std::endl;

    // prints line 39.
    std::cout << std::string(21, ' ');
    if (edges.at(69)->own()) {
        edges.at(69)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(69)->printNum();
    }
    std::cout << std::string(8, ' ');
    if (edges.at(70)->own()) {
        edges.at(70)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(70)->printNum();
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
    if (vertices.at(52)->own()) {
        vertices.at(52)->printOwner();
        vertices.at(52)->printLevel();
    } else {
        vertices.at(52)->printNum();
    }
    std::cout << "|--";
    if (edges.at(71)->own()) {
        edges.at(71)->printOwner();
        std::cout << 'R';
    } else {
        edges.at(71)->printNum();
    }
    std::cout << "--|";
    if (vertices.at(53)->own()) {
        vertices.at(53)->printOwner();
        vertices.at(53)->printLevel();
    } else {
        vertices.at(53)->printNum();
    }
    std::cout << '|' << std::endl;
}

void status(int builder, std::vector <Player*> player) {
    std::string colour;
    if (builder == 0) {
        colour == "Blue";
    } else if (builder == 1) {
        colour == "Red";
    } else if (builder == 2) {
        colour == "Orange";
    } else {
        colour == "Yellow";
    }
    std::cout << colour << " has " << player.at(builder)->numPoints << " building points, ";
    std::cout << player.at(builder)->resource[0] << " brick, ";
    std::cout << player.at(builder)->resource[1] << " energy, ";
    std::cout << player.at(builder)->resource[2] << " glass, ";
    std::cout << player.at(builder)->resource[3] << " heat, ";
    std::cout << player.at(builder)->resource[4] << " WIFI." << std::endl;
}

void residence(int builder, std::vector <Player*> p) {
    std::string colour;
    std::vector <int> basement = p.at(builder)->basement;
    std::vector <int> house = p.at(builder)->house;
    std::vector <int> tower = p.at(builder)->tower;
    if (builder == 0) {
        colour == "Blue";
    } else if (builder == 1) {
        colour == "Red";
    } else if (builder == 2) {
        colour == "Orange";
    } else {
        colour == "Yellow";
    }
    std::cout << colour << " has built: " << std::endl;
    for (auto B: basement) {
        std::cout << B << ' ';
    }
    std::cout << 'B' << std::endl;
    for (auto H: house) {
        std::cout << H << ' ';
    }
    std::cout << 'H' << std::endl;
    for (auto T: tower) {
        std::cout << T << ' ';
    }
    std::cout << 'T' << std::endl;
}

void buildRoad(int builder, std::vector <Edge*> edges) {
    std::string colour;
    if (builder == 0) {
        colour == "Blue";
    } else if (builder == 1) {
        colour == "Red";
    } else if (builder == 2) {
        colour == "Orange";
    } else {
        colour == "Yellow";
    }
    // std::cout << "You do not have enough resources." << std::endl;
}

void buildRes(int builder, std::vector <Vertex*> vertices) {
    std::string colour;
    int vertex;
    std::string buildingType;
    if (builder == 0) {
        colour == "Blue";
    } else if (builder == 1) {
        colour == "Red";
    } else if (builder == 2) {
        colour == "Orange";
    } else {
        colour == "Yellow";
    }
    
    // std::cout << "You do not have enough resources." << std::endl;
}

void improve(int builder, std::vector <Vertex*> vertices) {
    std::string colour;
    if (builder == 0) {
        colour == "Blue";
    } else if (builder == 1) {
        colour == "Red";
    } else if (builder == 2) {
        colour == "Orange";
    } else {
        colour == "Yellow";
    }

    // std::cout << "You do not have enough resources." << std::endl;
}

void trade(int builder, std::string colour, std::string give, std::string take) {
    std::string colour1;
    std::string colour2 = colour;
    if (builder == 0) {
        colour1 == "Blue";
    } else if (builder == 1) {
        colour1 == "Red";
    } else if (builder == 2) {
        colour1 == "Orange";
    } else {
        colour1 == "Yellow";
    }
    std::cout << colour1 << " offers " << colour2 << " one ";
    std::cout << give << " for one " << take << "." << std::endl;
    std::cout << "Does " << colour2 << " accept this offer?" << std::endl;
}

int next(int builder) {
    std::string next;
    if (builder == 0) {
        builder = 1;
        next = "Red";
    } else if (builder == 1) {
        builder = 2;
        next = "Orange";
    } else if (builder == 2) {
        builder = 3;
        next = "Yellow";
    } else {
        builder = 0;
        next = "Blue";
    }
    std::cout << "Builder " << next << "'s turn." << std::endl;
    return builder;
}

void save(int builder, std::vector <Player*> p) {
    std::string curTurn;
    int goose; // Must be a number from 0 - 18.
    if (builder == 0) {
        curTurn == "Blue";
    } else if (builder == 1) {
        curTurn == "Red";
    } else if (builder == 2) {
        curTurn == "Orange";
    } else {
        curTurn== "Yellow";
    }

    // prints line 1: <curTurn>
    std::cout << curTurn << std::endl;

    // prints line 2: <builder0Data>
    std::cout << p.at(0)->resource[0] << ' ';
    std::cout << p.at(0)->resource[1] << ' ';
    std::cout << p.at(0)->resource[2] << ' ';
    std::cout << p.at(0)->resource[3] << ' ';
    std::cout << p.at(0)->resource[4] << ' ';
    std::cout << 'r' << ' ';
    for (auto road0 : p.at(0)->road) {
        std::cout << road0 << ' ';
    }
    std::cout << 'h' << ' ';
    if (!p.at(0)->basement.empty()) {
        for (auto basement0 : p.at(0)->basement) {
            std::cout << basement0 << ' ';
        }
        std::cout << 'B' << ' ';
    } 
    if (!p.at(0)->house.empty()) {
        for (auto house0 : p.at(0)->house) {
            std::cout << house0 << ' ';
        }
        std::cout << 'T' << ' ';
    } 
    if (!p.at(0)->tower.empty()) {
        for (auto tower0 : p.at(0)->tower) {
            std::cout << tower0 << ' ';
        }
        std::cout << 'H';
    } 
    std::cout << std::endl;

    // prints line 3: <builder1Data>
    std::cout << p.at(1)->resource[0] << ' ';
    std::cout << p.at(1)->resource[1] << ' ';
    std::cout << p.at(1)->resource[2] << ' ';
    std::cout << p.at(1)->resource[3] << ' ';
    std::cout << p.at(1)->resource[4] << ' ';
    std::cout << 'r' << ' ';
    for (auto road1 : p.at(1)->road) {
        std::cout << road1 << ' ';
    }
    std::cout << 'h' << ' ';
    if (!p.at(1)->basement.empty()) {
        for (auto basement1 : p.at(1)->basement) {
            std::cout << basement1 << ' ';
        }
        std::cout << 'B' << ' ';
    } 
    if (!p.at(1)->house.empty()) {
        for (auto house1 : p.at(1)->house) {
            std::cout << house1 << ' ';
        }
        std::cout << 'T' << ' ';
    } 
    if (!p.at(1)->tower.empty()) {
        for (auto tower1 : p.at(1)->tower) {
            std::cout << tower1 << ' ';
        }
        std::cout << 'H';
    } 
    std::cout << std::endl;

    // prints line 4: <builder2Data>
    std::cout << p.at(2)->resource[0] << ' ';
    std::cout << p.at(2)->resource[1] << ' ';
    std::cout << p.at(2)->resource[2] << ' ';
    std::cout << p.at(2)->resource[3] << ' ';
    std::cout << p.at(2)->resource[4] << ' ';
    std::cout << 'r' << ' ';
    for (auto road2 : p.at(2)->road) {
        std::cout << road2 << ' ';
    }
    std::cout << 'h' << ' ';
    if (!p.at(2)->basement.empty()) {
        for (auto basement2 : p.at(2)->basement) {
            std::cout << basement2 << ' ';
        }
        std::cout << 'B' << ' ';
    } 
    if (!p.at(2)->house.empty()) {
        for (auto house2 : p.at(2)->house) {
            std::cout << house2 << ' ';
        }
        std::cout << 'T' << ' ';
    } 
    if (!p.at(2)->tower.empty()) {
        for (auto tower2 : p.at(2)->tower) {
            std::cout << tower2 << ' ';
        }
        std::cout << 'H';
    } 
    std::cout << std::endl;

    // prints line 5: <builder3Data>
    std::cout << p.at(3)->resource[0] << ' ';
    std::cout << p.at(3)->resource[1] << ' ';
    std::cout << p.at(3)->resource[2] << ' ';
    std::cout << p.at(3)->resource[3] << ' ';
    std::cout << p.at(3)->resource[4] << ' ';
    std::cout << 'r' << ' ';
    for (auto road3 : p.at(3)->road) {
        std::cout << road3 << ' ';
    }
    std::cout << 'h' << ' ';
    if (!p.at(3)->basement.empty()) {
        for (auto basement3 : p.at(3)->basement) {
            std::cout << basement3 << ' ';
        }
        std::cout << 'B' << ' ';
    } 
    if (!p.at(3)->house.empty()) {
        for (auto house3 : p.at(3)->house) {
            std::cout << house3 << ' ';
        }
        std::cout << 'T' << ' ';
    } 
    if (!p.at(3)->tower.empty()) {
        for (auto tower3 : p.at(3)->tower) {
            std::cout << tower3 << ' ';
        }
        std::cout << 'H';
    } 
    std::cout << std::endl;

    // prints line 6: <board>
    
    // prints line 7: <geese>
}

void notify::help() {
    std::cout << "Valid commands:" << std::endl;
    std::cout << "board" << std::endl;
    std::cout << "status" << std::endl;
    std::cout << "residences" << std::endl;
    std::cout << "build-road <edge#>" << std::endl;
    std::cout << "build-res <housing#>" << std::endl;
    std::cout << "improve <housing#>" << std::endl;
    std::cout << "trade <colour> <give> <take>" << std::endl;
    std::cout << "next" << std::endl;
    std::cout << "isave <file>" << std::endl;
    std::cout << "help>" << std::endl;
}

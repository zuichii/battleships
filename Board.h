#ifndef Board_H
#define Board_H
#include "Tile.h"
#include <iostream>
#include <string>
using namespace std;

class Board: public Tile{
    public:
        Tile grid[10][10];
        Board();

        void initBoard();
        void updateBoard(bool hasShip, int x, int y);
        void printBoard();
        void placeShip(int x, int y);
};

#endif
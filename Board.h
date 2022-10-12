#ifndef Board_H
#define Board_H
#include "Tile.h"
#include "Ship.h"
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
        bool validatePlacement(int x1, int x2, int y1, int y2);
        bool placeShip(int x, int y, string direction, int size);
};

#endif
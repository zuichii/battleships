#ifndef Board_H
#define Board_H
#include "Tile.h"
#include "Ship.h"
#include "Aircraft.h"
#include "Cruiser.h"
#include "Battleship.h"
#include "Destroyer.h"
#include "Submarine.h"
#include <iostream>
#include <string>
using namespace std;

class Board: public Tile{
    public:
        Tile grid[10][10];
        Board();

        Aircraft s1;
        Battleship s2;
        Destroyer s3;
        Submarine s4;
        Cruiser s5;
        


        void initBoard();
        void setShips(Ship currentShip);
        void updateBoard(bool hasShip, int x, int y);
        void printBoard();
    
        //bool validatePlacement(int x1, int x2, int y1, int y2);
        //bool placeShip(int x, int y, string direction, int size);


};

#endif
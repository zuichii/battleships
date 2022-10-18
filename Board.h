#ifndef Board_H
#define Board_H
#include <iostream>
#include <string>

#include "Aircraft.h"
#include "Battleship.h"
#include "Cruiser.h"
#include "Destroyer.h"
#include "Ship.h"
#include "Submarine.h"
#include "Tile.h"
using namespace std;

class Board : public Tile { //board class inherits from tile
 public:
  Tile grid[10][10]; //a board will consist of a 10x10 array of tile objects
  Board();
  
  //in this board, we create a ship object of each type
  Aircraft s1; 
  Battleship s2;
  Destroyer s3;
  Submarine s4;
  Cruiser s5;

  void initBoard();
  void setShips(Ship currentShip);
  void printBoard();
  void printHiddenBoard();
  
  // void updateBoard(bool hasShip, int x, int y);
  // void initBoardCPU();
  // bool validatePlacement(int x1, int x2, int y1, int y2);
  // bool placeShip(int x, int y, string direction, int size);
};

#endif
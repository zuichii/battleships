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

class Board : public Tile {
 public:
  Tile grid[10][10];
  Board();

  Aircraft s1;
  Battleship s2;
  Destroyer s3;
  Submarine s4;
  Cruiser s5;

  void initBoard();
  // void initBoardCPU();
  void setShips(Ship currentShip);
  // void updateBoard(bool hasShip, int x, int y);
  void printBoard();
  void printHiddenBoard();

  // bool validatePlacement(int x1, int x2, int y1, int y2);
  // bool placeShip(int x, int y, string direction, int size);
};

#endif
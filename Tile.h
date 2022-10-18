#ifndef Tile_H
#define Tile_H
#include <iostream>
#include <string>
using namespace std;

//define parent tile class
//each tile will have its location on the board
//each tile will have its own status
//to determine whether it is a ship or not a ship
//it also keeps track of whether that tile has been attacked already
class Tile {
 public:
  int xpos;
  int ypos;
  char status;
  bool isHit = false;

  Tile();
};

#endif
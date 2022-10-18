#ifndef Ship_H
#define Ship_H
#include <string>

#include "Tile.h"
using namespace std;
//ship class inherits from tile
//in the game, a tile can be recognised as a ship
//thus its attributes are used
class Ship : public Tile {
 public:
  int size = 2;
  char status = 'S';

  Ship();
};
#endif
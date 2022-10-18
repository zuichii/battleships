#ifndef Ship_H
#define Ship_H
#include <string>

#include "Tile.h"
using namespace std;

class Ship : public Tile {
 public:
  int size = 2;
  char status = 'S';

  Ship();
};
#endif
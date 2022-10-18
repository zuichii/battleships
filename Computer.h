#ifndef Computer_H
#define Computer_H
#include <iostream>

#include "Board.h"
#include "Entity.h"

class Computer : public Entity {
 public:
  void attack(Board *attackBoard);
  int shipsHit = 0;
};
#endif

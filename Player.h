#ifndef Player_H
#define Player_H
#include <iostream>

#include "Board.h"
#include "Entity.h"

class Player : public Entity {
 public:
  int getRow();
  int getCol();
  int shipsHit = 0;

  void attack(Board *attackBoard);
};

#endif
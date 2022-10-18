#ifndef Player_H
#define Player_H
#include <iostream>

#include "Board.h"
#include "Entity.h"

class Player : public Entity { //class player inherits from entity
 public:
  int getRow();
  int getCol();
  int shipsHit = 0; 

  void attack(Board *attackBoard); //this is the players version of the attack function defined in entity
};

#endif
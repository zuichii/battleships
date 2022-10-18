#ifndef Player_H
#define Player_H
#include <iostream>

#include "Board.h"
#include "Entity.h"

class Player : public Entity { //class player inherits from entity
 public:
	 Player();
  int getRow();
  int getCol();
  int getHits();
  void incrementHits();
  void attack(Board *attackBoard); //this is the players version of the attack function defined in entity
 private:
  int shipsHit = 0; 
};

#endif
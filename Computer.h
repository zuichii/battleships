#ifndef Computer_H
#define Computer_H
#include <iostream>

#include "Board.h"
#include "Entity.h"

class Computer : public Entity { //class computer inherits from entity
 public:
	 Computer();
  void attack(Board *attackBoard); //this is the computers version of the attack function defined in entity
  void incrementHits();
  int getHits();
 private:
  int shipsHit = 0;
};
#endif
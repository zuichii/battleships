#ifndef Entity_H
#define Entity_H
#include <iostream>

#include "Board.h"
#include "Entity.h"

class Entity {
 public:
  Entity();

  virtual void attack(Board *attackBoard) = 0;
};

#endif
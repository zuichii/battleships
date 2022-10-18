#ifndef Entity_H
#define Entity_H
#include <iostream>

#include "Board.h"
#include "Entity.h"
//define abstract class called entity
//the computer and player will both inherit from entity

class Entity {
 public:
  Entity();
  //a pure virtual function is defined
  //the player and computer child classes will inherit function below 
  //and redefine it
  virtual void attack(Board *attackBoard) = 0;
};

#endif
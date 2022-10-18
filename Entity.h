#ifndef Entity_H
#define Entity_H
#include "Board.h"
#include "Entity.h"
#include <iostream>

class Entity{
    public:
    Entity();
    
    virtual void attack(Board *attackBoard) = 0;

};

#endif
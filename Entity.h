#ifndef Entity_H
#define Entity_H
#include "Board.h"
#include "Entity.h"
#include <iostream>

class Entity{
    public:
    Entity();
    
    virtual bool attack(Board board) = 0;

};

#endif
#ifndef Player_H
#define Player_H
#include "Board.h"
#include "Entity.h"

#include <iostream>

class Player: public Entity{
    public: 
    

    int getX();
    int getY();
    int shipsHit = 0;

    void attack(Board *attackBoard);
};
    
#endif
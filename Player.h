#ifndef Player_H
#define Player_H
#include "Board.h"
#include "Entity.h"

#include <iostream>

class Player: public Entity{
    public: 
    

    // int getX();
    // int getY();
    

    virtual bool attack(int x, int y);

};
    
#endif
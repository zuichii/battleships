#ifndef Computer_H
#define Computer_H
#include "Board.h"
#include "Entity.h"
#include <iostream>



class Computer: public Entity{
    public:
    void attack(Board *attackBoard);
    int shipsHit = 0;

};
#endif

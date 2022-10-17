#ifndef Computer_H
#define Computer_H
#include "Board.h"
#include "Entity.h"
#include <iostream>



class Computer: public Entity{
    public:
    int val = 5;
    virtual bool attack(Board board);

};
#endif
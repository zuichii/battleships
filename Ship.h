#ifndef Ship_H
#define Ship_H
#include "Tile.h"
#include <string>
using namespace std;

class Ship: public Tile{

    public:

    int size;
    bool hit = false;
    char status = 'S';

    
    Ship();





};
#endif
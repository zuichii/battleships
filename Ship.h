#ifndef Ship_H
#define Ship_H
#include "Tile.h"
#include <string>
using namespace std;

class Ship: public Tile{

    public:

    int size = 2;
    bool hit = false;
    char status = 'S';
    int totalShips = 5;

    
    Ship();





};
#endif
#ifndef SHIP_H
#define SHIP_H
#include <string>
using namespace std;

class Ship{
    private:
        int hitCount;
        char orient;
        int size;
        int xpos;
        int ypos;
        string name;
    
    public:
        Ship(char orien, int siz, int x, int y, int hit, string nam){
            orient = orien;
            size = siz;
            xpos = x;
            ypos = y;
            hitCount = hit;
            name = nam;
        }


};

#endif

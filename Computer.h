#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
using namespace std;

class Computer{
    public:
        Computer(string letter);
        string getMoves();
        void move();   
};

#endif

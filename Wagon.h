#ifndef WAGON_H
#define WAGON_H
#include <string>
#include "Capybara.h"
using namespace std;

// Class definition for a book
class Wagon
{
public:
    //constructors
    Wagon();
    
    //attributes
    Capybara seat[4];
    int x;

    //functions
    bool addCapybara(Capybara newCapy);
    void emptyWagon();
    void printCapybaras();             

    //destructor 
    ~Wagon();
};
#endif //WAGON_H
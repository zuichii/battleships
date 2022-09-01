#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <string>
#include "Person.h"
using namespace std;

// Class definition for a book
class Airplane
{
public:
    //constructors
    Airplane(string callsign, Person thePilot, Person theCoPilot); 
    
    //attributes
    Person pilot; 
    Person copilot;
    string sign;

    //functions
    void setPilot(Person thePilot);  
    Person getPilot();
    void setCoPilot(Person theCoPilot);  
    Person getCoPilot();
    void printDetails();                
                    

    
};
#endif //AIRPLANE_H
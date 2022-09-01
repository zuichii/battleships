#include <iostream>
#include "Person.h"
#include "Airplane.h"
using namespace std;

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot){
    sign = callsign;
    pilot = thePilot;
    copilot = theCoPilot;
}

void Airplane::setPilot(Person thePilot){
    pilot = thePilot;
} 

Person Airplane::getPilot(){
    return pilot;
}

void Airplane::setCoPilot(Person theCoPilot){
    copilot = theCoPilot;
}

Person Airplane::getCoPilot(){
    return copilot;
}

void Airplane::printDetails(){
    cout << sign << endl << pilot.getName() << endl << copilot.getName() << endl;
}


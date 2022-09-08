#include "Musician.h"

Musician::Musician(){

}

Musician::Musician(string instrument, int experience){
    theInstrument = instrument;
    theExperience = experience;
}

string Musician::get_instrument(){
    return theInstrument;
}

int Musician::get_experience(){
    return theExperience;
}

Musician::~Musician(){
    
}
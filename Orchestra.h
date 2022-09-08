#ifndef ORCHESTRA_H
#define ORCHESTRA_H
#include "Musician.h"
using namespace std;

class Orchestra{
    public: 
        Orchestra();
        Orchestra(int size);
        

        int count;
        int capacity;
        Musician *members;

        int get_current_number_of_members();
        bool has_instrument(string instrument);
        Musician *get_members();
        bool add_musician(Musician new_musician);



        ~Orchestra();

};

#endif
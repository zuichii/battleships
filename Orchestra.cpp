#include "Orchestra.h"
#include "Musician.h"


Orchestra::Orchestra(){
    count = 0;
    members = new Musician;

}

Orchestra::Orchestra(int size){
    capacity = size;
    count = 0;
    members = new Musician[size];
}

int Orchestra::get_current_number_of_members(){
    return count;

}

bool Orchestra::has_instrument(string instrument){
    for(int i = 0; i < capacity; i++){
        if(members[i].get_instrument() == instrument){
            return 1;
        }
    }
    return 0;
}

Musician *Orchestra::get_members(){
    return members;

}

bool Orchestra::add_musician(Musician new_musician){
    if(count < capacity){
        members[count] = new_musician;
        count++;
        return 1;
    }
    return 0;
}

Orchestra::~Orchestra(){
    
}



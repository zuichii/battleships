#include "Truck_yard.h"
using namespace std;

Truck_yard::Truck_yard(){
    count = 0;
    trucks = new Truck;
}

Truck_yard::Truck_yard(int capacity){
    count = 0;
    trucks = new Truck[capacity];
    int max_size = capacity;
}


int Truck_yard::get_total_stock_count(){
    return count;
}


Truck Truck_yard::*get_current_stock_list(){
    return trucks;
}


bool Truck_yard::add_stock(Truck c){
    if(count < max_size){
        trucks[count] = c;
        count++;
        return true;
    }
    return false;
}



Truck_yard::~Truck_yard(){

}




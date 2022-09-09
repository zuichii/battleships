#ifndef TRUCKYARD_H
#define TRUCKYARD_H
#include <string>
#include "Truck.h"
using namespace std;

class Truck_yard{
    public:

        Truck_yard();   
        Truck_yard(int capacity);

        int count;
        int max_size;
        Truck *trucks;
        

        int get_total_stock_count(); 
        int get_stock_count(int code);
        Truck *get_current_stock_list();
};
        

#endif
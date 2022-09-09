#ifndef TRUCK_H
#define TRUCK_H
#include <string>
using namespace std;

class Truck{
    public: 
    
    Truck();
    Truck(int b_code, string b_name);

    int code;
    string name;

    string get_brand_name();
    int get_brand_code();
    ~Truck();

};







#endif
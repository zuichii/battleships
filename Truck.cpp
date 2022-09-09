#include "Truck.h"
using namespace std;

Truck::Truck(){
    name = "";
    code = 0;
}

Truck::Truck(int b_code, string b_name){
    name = b_name;
    code = b_code;
}

string Truck::get_brand_name(){
    return name;
}

int Truck::get_brand_code(){
    return code;
}

Truck::~Truck(){

}
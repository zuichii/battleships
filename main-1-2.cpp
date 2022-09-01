#include <iostream>
#include "Person.h"
using namespace std;

int main(){
    Person a(10000, "nate");
    a.setName("ip");
    a.setSalary(69);
    
    a.getName();
    a.getSalary();

}
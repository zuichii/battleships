#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(int mySalary, string myName){
    salary = mySalary;
    name = myName;
}

void Person::setName(string myName){
    name = myName;
}
void Person::setSalary(int mySalary){
    salary = mySalary;
}

string Person::getName(){
    return name;
}
int Person::getSalary(){
    return salary;
}

Person::~Person()
{
}
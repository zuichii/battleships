#include <iostream>
#include "Capybara.h"
using namespace std;

//implementation of default book constructor 
Capybara::Capybara(){
}

void Capybara::setName(string capyName){
    name = capyName;
}
void Capybara::setAge(int capyAge){
    age = capyAge;
}

string Capybara::getName(){
    return name;
}
int Capybara::getAge(){
    return age;
}


Capybara::~Capybara()
{
}
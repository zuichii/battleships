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

string getName(){
    return name;
}


Capybara::~Capybara()
{
}
#include <iostream>
#include "Capybara.h"
#include "Wagon.h"
using namespace std;

Wagon::Wagon(){
    int x = 0;

}

bool Wagon::addCapybara(Capybara newCapy){
    if(x >= 4){
        return false;
    }
    else{
        seat[x] = newCapy;
        x++;
        return true;
    }
    
}

void Wagon::emptyWagon(){
    for(int i = 0; i < 4; i++){
        seat[x] = {};
    }
    x = 0;
}

void Wagon::printCapybaras(){
    for(int i = 0; i < x; i ++){
        cout << seat[i].getName() << " " << seat[i].getAge() << endl;
    }
}

Wagon::~Wagon()
{
}



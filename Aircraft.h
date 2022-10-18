#ifndef Aircraft_H
#define Aircraft_H
#include <iostream>

#include "Ship.h"
using namespace std;

class Aircraft : public Ship { //aircraft inherits from ship
 public:
  Aircraft();
};
#endif
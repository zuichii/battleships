#include "Battleship.h"

#include <iostream>

#include "Ship.h"

Battleship::Battleship() { //battleship inherits from ship
  status = 'B';
  size = 4;
}
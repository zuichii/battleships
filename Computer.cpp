#include "Computer.h"

#include <iostream>

#include "Board.h"
#include "Entity.h"
#include "Tile.h"

void Computer::attack(Board *attackBoard) {
  bool validAttack = false;

  while (validAttack == false) {
    srand((unsigned)time(NULL));
    int cpuX = rand() % 10;
    int cpuY = rand() % 10;

    if (attackBoard->grid[cpuX][cpuY].isHit == false) {
      if (attackBoard->grid[cpuX][cpuY].status != '-') {
        cout << "YOUR SHIP HAS BEEN HIT!" << endl;
        attackBoard->grid[cpuX][cpuY].isHit = true;
        attackBoard->grid[cpuX][cpuY].status = 'X';
        shipsHit++;
        validAttack = true;

      } else {
        cout << "THE COMPUTER MISSED" << endl;
        attackBoard->grid[cpuX][cpuY].isHit = true;
        validAttack = true;
      }
    }
  }
  return;
};
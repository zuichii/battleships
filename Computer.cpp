#include "Computer.h"

#include <iostream>

#include "Board.h"
#include "Entity.h"
#include "Tile.h"

//computer attack function below
// the function ensures that the same space cannot be attacked more than once

Computer::Computer() {
	shipsHit = 0;
}

void Computer::incrementHits() {
	shipsHit++;
	return;
}

int Computer::getHits() {
	return shipsHit;
}
void Computer::attack(Board *attackBoard) {
  bool validAttack = false;

  while (validAttack == false) { 
    srand((unsigned)time(NULL));
    int cpuX = rand() % 10; //generate random x coordinate between 0 and 9
    int cpuY = rand() % 10; //generate random y coordinate between 0 and 9

    //check if the generated coordinate hasnt hit anything before
    //if not unique, it will loop back to the top to generate new coordinates again
    //only when a coordinate is unique will the program break out of the loop
    if (attackBoard->grid[cpuX][cpuY].isHit == false) {
      if (attackBoard->grid[cpuX][cpuY].status != '-') { //set hits to X, and mark that tile as hit
        attackBoard->grid[cpuX][cpuY].isHit = true;
        attackBoard->grid[cpuX][cpuY].status = 'X';
        cout << "YOUR SHIP HAS BEEN HIT!" << endl;
        cout << endl;
	      incrementHits();
        validAttack = true;

      } else {
        attackBoard->grid[cpuX][cpuY].isHit = true; //if miss, mark tile as hit anyway
        attackBoard->grid[cpuX][cpuY].status = '0';
        cout << "THE COMPUTER MISSED!" << endl;
        cout << endl;
        validAttack = true;
      }
    }
  }
  return;
};
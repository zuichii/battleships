#include "Board.h"
#include "Tile.h"
#include "Entity.h"
#include "Computer.h"
#include <iostream>


void Computer::attack(Board *attackBoard){
    
    bool validAttack = false;
    
    while(validAttack == false){
        
        srand((unsigned)time(NULL));
        int CPUx = rand() % 10;
        int CPUy = rand() % 10;

        if(attackBoard->grid[CPUx][CPUy].isHit == false){
            if(attackBoard->grid[CPUx][CPUy].status != '-' ){
                cout << "YOUR SHIP HAS BEEN HIT!" << endl;
                attackBoard->grid[CPUx][CPUy].isHit = true;
                attackBoard->grid[CPUx][CPUy].status = 'X';
                shipsHit++;
                validAttack = true;

            }
            else{
                cout << "THE COMPUTER MISSED" << endl;
                attackBoard->grid[CPUx][CPUy].isHit = true;
                validAttack = true;
            }

        }

    }
    return;

};
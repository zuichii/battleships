#include "Player.h"
#include "Board.h"
#include "Tile.h"
#include "Ship.h"



int Player::getX(){
    bool validX = false;
    while(validX == false){
        int xinput;
        std::cout << "Enter a X coordinate between 0 and 9";
        std::cin >> xinput;
        
        if(xinput < 0 || xinput > 9){
            std::cout << "Input not valid" << endl;
        }
        else{
            return xinput;
        }
    }

};

int Player::getY(){
    bool validY = false;
    while(validY == false){
        int yinput;
        std::cout << "Enter a Y coordinate between 0 and 9";
        std::cin >> yinput;
        
        if(yinput < 0 || yinput > 9){
            std::cout << "Input not valid" << endl;
        }
        else{
            return yinput;
        }
    }
};




void Player::attack(Board *attackBoard){
    bool validAttack = false;
    while(validAttack == false){
        
        srand((unsigned)time(NULL));
        
        
        
        // bool validCords = false;
        
        // int USERx;
        // std::cout << "Enter a X coordinate between 0 and 9" << endl;
        // std::cin >> USERx;
        // if(USERx < 0 || USERx > 9){
        //     std::cout << "Not valid input" << endl;
        // }
        
        // int USERy;
        // std::cout << "Enter a X coordinate between 0 and 9" << endl;
        // std::cin >> USERx;
        // if(USERy < 0 || USERy > 9){
        //     std::cout << "Not valid input" << endl;
        // }


        
        
        
        if(attackBoard->grid[CPUx][CPUy].isHit == false){ //if spot hasnt been hit before
            if(attackBoard->grid[CPUx][CPUy].status != '-' ){ //attack
                cout << "YOU HIT A SHIP!" << endl;
                attackBoard->grid[CPUx][CPUy].isHit = true;
                attackBoard->grid[CPUx][CPUy].status = 'X';
                shipsHit++;
                validAttack = true;
            }
            else{
                cout << "YOU MISSED!" << endl;
                attackBoard->grid[CPUx][CPUy].isHit = true;
                attackBoard->grid[CPUx][CPUy].status = '0';
                validAttack = true;
            }
        }
    }
    return;
};













// void Player::attack(int x, int y, Board attackBoard){
//     std::cout << "test";

//     return;
// };





// bool Player::attack(int x, int y){
//     bool hit;
//     if(Board::grid[x][y].status != '-'){
//         hit = true;
//         Board::grid[x][y].status == 'X';
//         return true;
//     }
//     hit = false;
//     return false;
// };









// validAttackCords = false;
// while(validAttackCords == false){
//     bool validx = false;
//     bool validy = false;
//     int xinput;
//     int yinput;
//     std::cout << "Enter a X coordinate between 0 and 9";
//     std::cin >> xinput;
//     std::cout << "Enter a Y coordinate between 0 and 9";
//     std::cin >> yinput;
    
//     while(validx == false){
    
//         if(xinput < 0 || xinput > 9){
//         cout << "Enter a valid X coordinate";
//         }

//     }
    
//     while(validy == false){
//         if(yinput < 0 || yinput > 9){
//         cout << "Enter a valid Y coordinate";
//         }
//     }
    
    


// }


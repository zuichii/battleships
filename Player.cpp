#include "Player.h"

#include <string>

#include "Board.h"
#include "Ship.h"
#include "Tile.h"

int Player::getRow() {
  std::string rowInput;
  std::cout << "Enter a row coordinate between 0 and 9: " << endl;
  std::cin >> rowInput;
  while (rowInput.length() != 1 || !isdigit(rowInput[0])) {
    std::cout << "Enter a valid X coordinate: ";
    std::cin >> rowInput;
  }
  int number = stoi(rowInput);
  return number;
};

int Player::getCol() {
  std::string colInput;
  std::cout << "Enter a Y coordinate between 0 and 9: " << endl;
  std::cin >> colInput;
  while (colInput.length() != 1 || !isdigit(colInput[0])) {
    std::cout << "Enter a valid Y coordinate: ";
    std::cin >> colInput;
  }
  int number = stoi(colInput);
  return number;
};

void Player::attack(Board *attackBoard) {
  bool validAttack = false;
  while (validAttack == false) {
    int userX = getRow();
    int userY = getCol();

    if (attackBoard->grid[userX][userY].isHit ==
        false) {  // if spot hasnt been hit before
      if (attackBoard->grid[userX][userY].status != '-') {  // attack
        cout << "YOU HIT A SHIP!" << endl;
        attackBoard->grid[userX][userY].isHit = true;
        attackBoard->grid[userX][userY].status = 'X';
        shipsHit++;
        validAttack = true;
      } else {
        cout << "YOU MISSED!" << endl;
        attackBoard->grid[userX][userY].isHit = true;
        attackBoard->grid[userX][userY].status = '0';
        validAttack = true;
      }
    }
    cout << "You have already used that coordinate." << endl;
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
//     int colinput;
//     std::cout << "Enter a X coordinate between 0 and 9";
//     std::cin >> xinput;
//     std::cout << "Enter a Y coordinate between 0 and 9";
//     std::cin >> colinput;

//     while(validx == false){

//         if(xinput < 0 || xinput > 9){
//         cout << "Enter a valid X coordinate";
//         }

//     }

//     while(validy == false){
//         if(colinput < 0 || colinput > 9){
//         cout << "Enter a valid Y coordinate";
//         }
//     }

// }

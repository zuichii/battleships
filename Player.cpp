#include "Player.h"

#include <string>

#include "Board.h"
#include "Ship.h"
#include "Tile.h"

//function that gets a row input from the user
//it will keep asking the user for inputs until a valid input has been passed
//a valid input is strictly a number between 0 and 9 inclusive
int Player::getRow() {
  std::string rowInput;
  std::cout << "Enter a row coordinate between 0 and 9 (inclusive): " << endl;
  std::cin >> rowInput;
  while (rowInput.length() != 1 || !isdigit(rowInput[0])) {
    std::cout << "Enter a valid row coordinate: ";
    std::cin >> rowInput;
  }
  int number = stoi(rowInput);
  return number;
};


//function that gets a column input from the user
//it will keep asking the user for inputs until a valid input has been passed
//a valid input is strictly a number between 0 and 9 inclusive
int Player::getCol() {
  std::string colInput;
  std::cout << "Enter a col coordinate between 0 and 9 (inclusive): " << endl;
  std::cin >> colInput;
  while (colInput.length() != 1 || !isdigit(colInput[0])) {
    std::cout << "Enter a valid col coordinate: ";
    std::cin >> colInput;
  }
  int number = stoi(colInput);
  return number;
};


//player attack function below
//the function ensures that the same space cannot be attacked more than once
void Player::attack(Board *attackBoard) {
  bool validAttack = false;
  while (validAttack == false) {
    int userX = getRow(); //get row coordinate by calling getRow function (user input)
    int userY = getCol(); //get column coordinate by calling getCol function (user input)

    if (attackBoard->grid[userX][userY].isHit ==
        false) {  // if spot hasnt been hit before
      if (attackBoard->grid[userX][userY].status != '-') {  // attack
        attackBoard->grid[userX][userY].isHit = true; //flag tile as hit
        attackBoard->grid[userX][userY].status = 'X'; //ship hits are denoted as X
        cout << "YOU HIT A SHIP!" << endl;
        cout << endl;
        shipsHit++;
        return;
      } else {
        attackBoard->grid[userX][userY].isHit = true; //flag tile as hit
        attackBoard->grid[userX][userY].status = '0'; //ship misses (ocean) are denoted as 0
        cout << "YOU MISSED!" << endl;
        cout << endl;
        return;
      }
    }
    cout << "You have already used that coordinate." << endl;
    cout << endl;
  }
  return;
};



//PREVIOUS IMPLEMENTATIONS/WORKINGS/TESTING BELOW




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

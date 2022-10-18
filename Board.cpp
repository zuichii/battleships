#include "Board.h"

#include <stdlib.h>

#include <iostream>

#include "Aircraft.h"
#include "Battleship.h"
#include "Cruiser.h"
#include "Destroyer.h"
#include "Ship.h"
#include "Submarine.h"
#include "Tile.h"
using namespace std;

Board::Board(){};

// void Board::updateBoard(bool hasShip, int x, int y){
//     if(hasShip == true){
//         grid[x][y].status = 'S';

//     }
//     else{
//         grid[x][y].status = 0;
//     }
// }

void Board::printBoard() {
  cout << "  0 1 2 3 4 5 6 7 8 9" << endl;
  char rowLabel = '0';
  for (int row = 0; row < 10; row++) {
    cout << rowLabel << ' ';
    rowLabel++;
    for (int col = 0; col < 10; col++) {
      cout << grid[row][col].status << " ";
    }
    cout << endl;
  }
  return;
};

void Board::printHiddenBoard() {
  cout << "  0 1 2 3 4 5 6 7 8 9" << endl;
  char rowLabel = '0';
  for (int row = 0; row < 10; row++) {
    cout << rowLabel << ' ';
    rowLabel++;
    for (int col = 0; col < 10; col++) {
      if (grid[row][col].isHit == true) {
        cout << grid[row][col].status << " ";
      } else {
        cout << "-"
             << " ";
      }
    }
    cout << endl;
  }
  return;
};

void Board::setShips(Ship currentShip) {
  bool setHorizontal = false;
  bool setVertical = false;
  bool validShip = false;
  // int numberOfShips = 5;
  int canPlace;

  int pickDirection = rand() % 2;  // randomly pick direction

  while (validShip ==
         false) {  // loop will keep going until a ship has been placed

    while (setHorizontal == false) {  // sub loop that places a ship

      if (pickDirection == 0) {  // code for horizontal
        srand((unsigned)time(NULL));
        int xpos = rand() % (10 - currentShip.size);
        int ypos = rand() % 10;
        canPlace = 0;

        for (int i = xpos; i < xpos + currentShip.size;
             i++) {  // check ship placement
          if (Board::grid[i][ypos].status ==
              '-') {  // check if the desired space is empty
            canPlace++;
          } else {  // if not empty, breaak
            break;
          }
          if (canPlace == currentShip.size) {
            for (int i = xpos; i < (xpos + currentShip.size); i++) {
              Board::grid[i][ypos].status = currentShip.status;
            }
            setHorizontal = true;
            validShip = true;
          }
        }
      } else {
        break;
      }
    }

    while (setVertical == false) {  // sub loop that places a ship vertically

      if (pickDirection == 1) {  // code for vertical
        srand((unsigned)time(NULL));
        int xpos = rand() % 10;
        int ypos = rand() % (10 - currentShip.size);
        canPlace = 0;

        for (int i = ypos; i < ypos + currentShip.size;
             i++) {  // check ship placement
          if (Board::grid[xpos][i].status ==
              '-') {  // if not fully blank break loop
            canPlace++;
          } else {  // if all blank place ship
            break;
          }
          if (canPlace == currentShip.size) {
            for (int i = ypos; i < (ypos + currentShip.size); i++) {
              Board::grid[xpos][i].status = currentShip.status;
            }
            setVertical = true;
            validShip = true;
          }
        }
      } else {
        break;
      }
    }
  }
};

void Board::initBoard() {
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      grid[x][y].status = '-';
    }
  }

  Board::setShips(s1);
  Board::setShips(s2);
  Board::setShips(s3);
  Board::setShips(s4);
  Board::setShips(s5);
};

// void Board::initBoardCPU(){
//     for(int x = 0; x < 10; x++){
//         for(int y = 0; y < 10; y++){
//             grid[x][y].status = '-';
//             }
//         }

//     Board::setShips(s1);
//     Board::setShips(s2);
//     Board::setShips(s3);
//     Board::setShips(s4);
//     Board::setShips(s5);

// };

// bool Board::validatePlacement(int x1, int x2, int y1, int y2){

// bool allValid = true;

// for(int row = x1; row <x2; row++){
// for (int col = y1; col<y2; col++){
// if (Board::grid[row][col].status != '-');
// allValid = false;
// break;
//}
//}
// if(allValid == true){
// for(int row = x1; row <x2; row++){
// for(int col = y1; col<y2; col++){
// Board::grid[row][col].status = 'S';

//}
//}
//}
// return allValid;
//};

// bool Board::placeShip(int x, int y, string direction, int size){
// int x1 = x;
// int x2 = x+1;
// int y1 = y;
// int y2 = y+1;

// if(direction == "left"){
// if(y - size < 0 ){
// return false;
//}
// y1 = y - size +1;
//}

// else if (direction == "right"){
// if(y + size >= 10){
// return false;
//}
// y2 = y + size;
//}

// else if (direction == "up"){
// if(x - size <0){
// return false;
//}
// x1 = x - size +1;
//}

// else if (direction == "down"){
// if(x + size >= 10){
// return false;
//}
// x2 = x + size;
//}

// return validatePlacement(x1, x2, y1, y2);
//};

// PUT THIS IN INIT BOARD
// FUNCTION SETSHIPS, CALL FUNCTION 5 TIMES TO PLACE ALL 5 SHIPS
// PLACE SHIPS IN DESCENDING ORDER OF SIZE
// Board::setShips(s1.size)
// Board::setShips(s2.size)
// Board::setShips(s3.size)
// Board::setShips(s4.size)
// Board::setShips(s5.size)

// int noShipsPlaced = 0;
// int numberOfShips = 5;
// string randomDirection;
// int size;

// while(noShipsPlaced < numberOfShips){
//   int randomRow = rand() % 10;
//  int randomCol = rand() % 10;
//  int randomDirectionNumber = rand() % 4;
// if (randomDirectionNumber == 0){
//     randomDirection = "left";
// }
// else if (randomDirectionNumber == 1){
//    randomDirection = "right";
//}
// else if (randomDirectionNumber == 2){
//    randomDirection = "up";
//}
// else if (randomDirectionNumber == 3){
//    randomDirection = "down";
//}
// if (placeShip(randomRow, randomCol, randomDirection, size) == true){
//    noShipsPlaced++;
//}

//}
// return;
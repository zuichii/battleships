#include <cstdlib>
#include <ctime>
#include <iostream>

#include "Aircraft.h"
#include "Battleship.h"
#include "Board.h"
#include "Computer.h"
#include "Cruiser.h"
#include "Destroyer.h"
#include "Entity.h"
#include "Player.h"
#include "Submarine.h"
#include "Tile.h"
using namespace std;

int main() {
  Board *userBoard = new Board();   // create board of blanks
  Board *enemyBoard = new Board();  // create board of blanks
  Computer enemy; //create object (entity) for enemy
  Player user; //create object (entity) for user

  userBoard->initBoard();   // set user ships
  enemyBoard->initBoard();  // set enemy ships

  cout << "WELCOME TO BATTLESHIPS!" << endl;
  cout << "Your ships have randomly been placed on the board for you." << endl;
  cout << "You will be versing a computer who is trying to destroy your ships."
       << endl;
  cout << "You must sink all of the enemy's ships in order to win!" << endl;
  cout << "Good luck!" << endl;

  cout << "######################" << endl;

  cout << "---LEGEND---" << endl;
  cout << "- = Blank" << endl;
  cout << "A,B,C,D,S = Ship types" << endl;
  cout << "A = 5 tiles long" << endl;
  cout << "B = 4 tiles long" << endl;
  cout << "D = 3 tiles long" << endl;
  cout << "S = 3 tiles long" << endl;
  cout << "C = 2 tiles long" << endl;

  cout << "######################" << endl;

  cout << "The top board is to see where you are attacking." << endl;
  cout << "The bottom board is where you will see your ships being attacked."
       << endl;
  cout << "To attack, simply enter a row and a column coordinate in the terminal." << endl;
  cout << endl;
  enemyBoard->printHiddenBoard();
  cout << endl;
  userBoard->printBoard();
  cout << endl;

  

  cout << "######################" << endl;


  //main game loop
  //this loop will alternate through player and enemy attacking turns
  //until the game is finished
  //the program knows when the game is won when 17 ship tiles are hit
  bool gameWon = false;
  while (gameWon == false) {
    // PLAYER TURN
    user.attack(enemyBoard);
    enemyBoard->printHiddenBoard();
    cout << endl;

    if (user.shipsHit == 17 || enemy.shipsHit == 17) {
      break;
    }

    // ENEMY TURN
    enemy.attack(userBoard);
    userBoard->printBoard();

    if (user.shipsHit == 17 || enemy.shipsHit == 17) {
      break;
    }
  }

//determine who won by who reached 17 ship hits
  if (user.shipsHit == 17) {
    cout << "You have sunk all of the enemy's ships!" << endl;
    cout << "LOL W GANG!";
  } else if (enemy.shipsHit == 17) {
    cout << "The enemy has sunk all your ships!" << endl;
    cout << "L bozo lol L gang" << endl;
  }

  
  // FREE MEMORY
  delete[] userBoard;
  delete[] enemyBoard;

  return 0;
}





//PREVOIUS IMPLEMENTATION/TESTING OF ALGORITHMS AND CODE BELOW



// //PLAYER TURN
// user.attack(enemyBoard);
// enemyBoard->printHiddenBoard();
// cout << "End of player turn" << endl;

// //ENEMY TURN
// enemy.attack(userBoard);
// userBoard->printBoard();
// cout << "End of enemy turn" << endl;

//     //PLAYER TURN
// user.attack(enemyBoard);
// enemyBoard->printHiddenBoard();
// cout << "End of player turn" << endl;

// //ENEMY TURN
// enemy.attack(userBoard);
// userBoard->printBoard();
// cout << "End of enemy turn" << endl;

//     //PLAYER TURN
// user.attack(enemyBoard);
// enemyBoard->printHiddenBoard();
// cout << "End of player turn" << endl;

// //ENEMY TURN
// enemy.attack(userBoard);
// userBoard->printBoard();
// cout << "End of enemy turn" << endl;

// return 0;

// a.setShip(s1.size);
// a.setShip(s2.size);
// cin >> "Enter x coordinate: ";

// a.printBoard();

// return 0;

// int cord = 5;
// int cord2 = 5;

// a.placeShip(cord, cord2);
// a.updateBoard(true, 0, 0);
// a.validatePlacement();
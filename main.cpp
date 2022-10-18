#include "Tile.h"
#include "Board.h"
#include "Aircraft.h"
#include "Battleship.h"
#include "Cruiser.h"
#include "Destroyer.h"
#include "Submarine.h"
#include "Entity.h"
#include "Computer.h"
#include "Player.h"
#include <iostream>
using namespace std;


int main(){
    srand((unsigned)time(NULL));
    
    Board *userBoard = new Board(); //create board of blanks
    Board *enemyBoard = new Board(); //create board of blanks
    Computer enemy;
    Player user;

    
    userBoard->initBoard(); //setships
    enemyBoard->initBoard(); //setships


    cout << "WELCOME TO BATTLESHIPS!" << endl;
    cout << "Your ships have randomly been placed on the board for you." << endl;
    cout << "You will be versing a computer who is trying to destroy your ships." << endl;
    cout << "You must sink all of the enemy's ships in order to win!" << endl;
   
    cout << "#####################" << endl;

    cout << "---LEGEND---" << endl;
    cout << "- = Blank" << endl;
    cout << "A,B,C,D,S = Ship types" << endl;
    cout << "A = 5 tiles long" << endl;
    cout << "B = 4 tiles long" << endl;
    cout << "D = 3 tiles long" << endl;
    cout << "S = 3 tiles long" << endl;
    cout << "C = 2 tiles long" << endl;

    cout << "#####################" << endl;

    cout << "The top board is to see your ships and if they are being hit" << endl;
    cout << "The bottom board is where you will aim for the enemy ships, and will keep track of hits or misses" << endl;
    
    enemyBoard->printBoard();
    userBoard->printBoard();
    
    cout << "Good luck!" << endl;

    cout << "#####################" << endl;

    
    
    // bool gameWon = false;
    // while(gameWon == false){

        
    //     //PLAYER TURN 
    //     user.attack(enemyBoard);
    //     enemyBoard->printHiddenBoard();
    //     cout << "End of player turn" << endl;

    //     if(user.shipsHit == 17 || enemy.shipsHit == 17){
    //         break;
    //     }
        
    //     //ENEMY TURN 
    //     enemy.attack(userBoard);
    //     userBoard->printBoard();
    //     cout << "End of enemy turn" << endl;

    //     if(user.shipsHit == 17 || enemy.shipsHit == 17){
    //         break;
    //     }
    
    // }

    // if(user.shipsHit == 17){
    //     cout << "You have sunk all of the enemy's ships!" << endl;
    //     cout << "Congratulations!"; 
    // }
    // else if(enemy.shipsHit == 17){
    //     cout << "The enemy has sunk all your ships!" << endl;
    //     cout << "L bozo :(" << endl; 
    // }



  


    
    
    //The enemy has sunk all of your ships.
//Well played.

    
    
    
    
}

    // return 0;
    
    
    
    
    
    //a.setShip(s1.size);
    //a.setShip(s2.size);
    //cin >> "Enter x coordinate: ";    

    //a.printBoard();
    
    //return 0;

    //int cord = 5;
    //int cord2 = 5;

    //a.placeShip(cord, cord2);
    //a.updateBoard(true, 0, 0);
    //a.validatePlacement();
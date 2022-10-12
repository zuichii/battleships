#include "Board.h"
#include "Tile.h"
#include "Ship.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


Board::Board(){

};


void Board::updateBoard(bool hasShip, int x, int y){
    if(hasShip == true){
        grid[x][y].status = 'S';

    }
    else{
        grid[x][y].status = 0;
    }
}



void Board::printBoard(){
    cout << "  0 1 2 3 4 5 6 7 8 9" << endl;
        char rowLabel = '0';
        for (int row = 0; row <10; row++){
            cout << rowLabel << ' ';
            rowLabel++;
            for (int col = 0; col <10; col++){
                cout << grid[row][col].status << " ";
            }
            cout << endl;
        }
    return;
};

bool Board::validatePlacement(int x1, int x2, int y1, int y2){

    bool allValid = true;

    for(int row = x1; row <x2; row++){
        for (int col = y1; col<y2; col++){
            if (Board::grid[row][col].status != '-');
            allValid = false;
            break;  
        }
    }
    if(allValid == true){
        for(int row = x1; row <x2; row++){
            for(int col = y1; col<y2; col++){
                Board::grid[row][col].status = 'S';

            }
        }
    }
    return allValid;
};

bool Board::placeShip(int x, int y, string direction, int size){
    int x1 = x;
    int x2 = x+1;
    int y1 = y;
    int y2 = y+1;

    if(direction == "left"){
        if(y - size < 0 ){
            return false;
        }
        y1 = y - size +1;
    }

    else if (direction == "right"){
        if(y + size >= 10){
            return false;
        }
        y2 = y + size;
    }

    else if (direction == "up"){
        if(x - size <0){
            return false;
        }
        x1 = x - size +1;
    }
    
    else if (direction == "down"){
        if(x + size >= 10){
            return false;
        }
        x2 = x + size;
    }


    return validatePlacement(x1, x2, y1, y2);
};

void Board::initBoard(){
    for(int x = 0; x < 10; x++){
        for(int y = 0; y < 10; y++){
            grid[x][y].status = '-';
            } 
        }

    int noShipsPlaced = 0;
    int numberOfShips = 5;
    string randomDirection = " ";
    int size = 2;
    

    while(noShipsPlaced < numberOfShips){
        int randomRow = rand() % 10;
        int randomCol = rand() % 10;
        int randomDirectionNumber = rand() % 3;
        if (randomDirectionNumber == 0){
            randomDirection = "left";
        }
        else if (randomDirectionNumber == 1){
            randomDirection = "right";
        }
        else if (randomDirectionNumber == 2){
            randomDirection = "up";
        }
        else if (randomDirectionNumber == 3){
            randomDirection = "down";
        }
        if (placeShip(randomRow, randomCol, randomDirection, size)){
            noShipsPlaced++;
        }

    }
    return;
};
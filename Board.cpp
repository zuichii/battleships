#include "Board.h"
#include "Tile.h"
#include "Ship.h"
#include <iostream>
using namespace std;


Board::Board(){

};

void Board::initBoard(){
    for(int x = 0; x < 10; x++){
        for(int y = 0; y < 10; y++){
            grid[x][y].status = '-';
            } 
        }
    return;
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

void Board::placeShip(int x, int y){
    Board::grid[x][y].status = 'S';
};
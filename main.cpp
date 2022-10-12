#include "Tile.h"
#include "Board.h"
#include <iostream>
using namespace std;

int main(){

    Board a;
    a.initBoard();
    //a.printBoard();
    
    //return 0;

    //int cord = 5;
    //int cord2 = 5;

    //a.placeShip(cord, cord2);
    a.updateBoard(true, 0, 0);
    a.printBoard();

    return 0;
    
    //cin >> "Enter x coordinate: ";

}
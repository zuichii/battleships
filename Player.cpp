#include "Player.h"
#include "Board.h"
#include "Tile.h"
#include "Ship.h"

Player::Player(){

};


bool Player::attack(int x, int y){
    bool hit;
    if(Board::grid[x][y].status != '-'){
        hit = true;
        Board::grid[x][y].status == 'X';
        return true;
    }
    hit = false;
    return false;
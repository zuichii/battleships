void Board::printBoard(){
    cout << "  0 1 2 3 4 5 6 7 8 9" << endl;
        char rowLabel = '0';
        for (int row = 0; row <10; row++){
            cout << rowLabel << ' ';
            rowLabel++;
            for (int col = 0; col <10; col++){
                if(grid[row][col].isHit == true){
                    cout << grid[row][col].status << " "; 
                }
                else{
                    cout << "-" << " ";
                }
            }
            cout << endl;
        }
    return;
};



bool Player::attack(int x, int y){

    int ammo = 25;
    while(ammo != 0){
        bool hit;
        if(Board::grid[x][y].status != '-'){
            hit = true;
            Board::grid[x][y].status == 'X';
            return true;
            cout << "You have hit a ship";
            ammo--;
            }
        else if(Board::grid[x][y].status != '$'){
            hit = false;
            cout << "You have landed on a power up!";
            ammo--;
            return false;
            }
    
        else{
            hit = false;
            cout << "You have missed.";
            ammo--;
            return false;
    }
}
}










































#include <stdlib.h>
void setShips(int length){
    
    
    bool setHorizontal = false;
    bool setVertical = false;
    bool validShip = false;
    //int numberOfShips = 5;
    
    
    
    while(validShip = false){  //loop will keep going until a ship has been placed

        int pickDirection = rand() % 2; //randomly pick direction

        while(setHorizontal = false){ // sub loop that places a ship 
            
            if(pickDirection == 0){  //code for horizontal
                int xpos = rand() % (10-length);
                int ypos = rand() % 10;

                for(int i = xpos; i < xpos+length; i++){ //check ship placement
                    if(Board::grid[i][ypos].status != '-'){ //if not fully blank break loop
                        break;
                    }
                    else{ //if all blank, place the ship
                        for(int i = xpos; i < (xpos+length); i++){
                            Board::grid[i][ypos].status = 'S';
                        }
                        setHorizontal = true;  
                        validShip = true; 
                    }
                }
            }
            else{
                break;
            }
        }

        
        while(setVertical = false){ // sub loop that places a ship vertically
        
            if(pickDirection == 1){  //code for vertical
                int xpos = rand() % 10;
                int ypos = rand() % (10-length);

                for(int i = ypos; i < ypos+length; i++){ //check ship placement
                    if(Board::grid[xpos][i].status != '-'){ // if not fully blank break loop
                        break;
                    } 
                    else{ //if all blank place ship
                        for(int i = ypos; i < (ypos+length); i++){
                            Board::grid[xpos][i].status = 'S';
                        }
                        setVertical = true;
                        validShip = true;
                    }
                }
            }
            else{
                break;
            }
        }
    }

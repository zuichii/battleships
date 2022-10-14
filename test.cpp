#include <stdlib.h>
void setShips(int length){
    
    
    bool setHorizontal = false;
    bool setVertical = false;
    bool validShip = false;
    int numberOfShips = 5;
    int pickDirection = rand() % 2;
    
    while(validShip = false){  // main loop, that breaks once all 5 ships are placed
        

        while(setVertical = false){ // sub loop that places a ship vertically
        
            if(pickDirection == 0){  //code for horizontal
                int xpos = rand() % (10-length);
                int ypos = rand() % 10;

            for(int i = xpos; i < xpos+length; i++){ //loop that checks valid placements
                if(Board::grid[i][ypos].status != '-'){
                    for(int i = xpos; i < (xpos+length); i++){
                        Board::grid[i][ypos].status = 'S';
                    }
                }
                else{
                    break
                } 

            }

            
            }
        }

        while(setHorizontal = false){ // sub loop that places a ship vertically
        
            if(pickDirection == 1){  //code for horizontal
                int xpos = rand() % 10;
                int ypos = rand() % (10-length);

            for(int i = xpos; i < xpos+length; i++){ //loop that checks valid placements
                if(Board::grid[xpos][i].status != '-'){
                    for(int i = xpos; i < (xpos+length); i++){
                        Board::grid[xpos][i].status = 'S';
                    }
                }
                else{
                    break
                } 

            }
        }
    }
}

       
        

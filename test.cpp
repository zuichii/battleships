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

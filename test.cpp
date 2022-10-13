#include <stdlib.h>
void setShips(int length)
	{
        bool valid;
        bool validDirections[] = {true, true, true, true};
        
        while(valid = false){
            
            int xPos = rand() % 10;
		    int yPos = rand() % 10; 
            if(xPos + length > 10){
                validDirections[0] = false;
            }
            if(xPos - length < 10){
                validDirections[1] = false;
            }
            if(yPos + length > 10){
                validDirections[2] = false;
            }
            if(yPos - length < 10){
                validDirections[3] = false;
            }
            
        }

        int randomdir = rand() % 4;
        while(validDirections[randomdir] == false){
            

        }


        
        
        

    }



void checkShips(int xPos, int yPos, int direction){
       
        

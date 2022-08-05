// function that print out the scaled version of the matrix
#include <iostream>
using namespace std;

void print_scaled(int array[3][3],int scale){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j == 0 || j == 1){
                cout << array[i][j] * scale << " ";
            }
            else{
                cout << array[i][j] * scale;
            }
            
        }
        cout << endl;
    }
    return;
}
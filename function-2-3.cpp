//function that given an array of integers and the length of the array, will count the amount of times the numbers 2, 5 and 9 appear using a switch statement.
#include <iostream>
using namespace std;

void two_five_nine(int array[], int n){
    int twos = 0;
    int fives = 0;
    int nines = 0;
    
    if(n < 0){

        return;
        
    }
    else{
        for(int i = 0; i < n; i++){
            switch(array[i]){
                case 2:
                    twos = twos + 1;
                    break;
                case 5:
                    fives = fives + 1;
                    break;
                case 9:
                    nines = nines + 1;
                    break;
            }
        }
        cout << "2:" << twos << ";5:" << fives << ";9:" << nines << ";" << std::endl;
        return;
    }
}
    

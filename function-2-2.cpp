// function that takes the array and its size as a parameter, and returns the integer value
#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits){
    int sum = 0;
    int res = 0;
    int n = number_of_digits;
    

    for(int i = 0; i < number_of_digits; i++){
        
        res = (binary_digits[i])*pow(2,n-1);    
        n--;
        sum+= res; 
        
    }
    return sum;

}
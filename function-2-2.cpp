#include <math.h>
int bin_to_int(int binary_digits[], int number_of_digits){
    
    int n = number_of_digits;
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        sum = sum + (binary_digits[i] * pow(2,n-1));
        n--;
    }
    return sum;

}


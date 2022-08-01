#include <iostream>
#include <stdlib.h>

extern double sum_even(double array[], int n);

int main(){
    double array[] = {1,2,1,4,1,3};
    int n = 6;

    std::cout << "The number is: " << sum_even(array, n) << std::endl;

    return 0;
}



#include <iostream>
#include <stdlib.h>

extern double weighted_average(int array[], int n);

int main(){
    int array[] = {1,2,1,4,1,3};
    int n = 6;

    std::cout << "The number is: " << weighted_average(array, n) << std::endl;

    return 0;
}



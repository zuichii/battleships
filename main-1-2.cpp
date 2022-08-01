#include <iostream>
#include <stdlib.h>

extern double array_mean(int array[], int n);

int main(){
    int array[] = {2,4,6,9};
    int arraySize = 4;
    std::cout << "The number is: " << array_mean(array, arraySize) << std::endl;

    return 0;
}

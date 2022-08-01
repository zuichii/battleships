#include <iostream>
#include <stdlib.h>

extern int array_sum(int array[], int n);

int main(){
    int array[] = {1,2,3,4,5};
    int arraySize = sizeof(array)/sizeof(array[0]);

    std::cout << "The number is: " << array_sum(array, arraySize) << std::endl;

    return 0;
}




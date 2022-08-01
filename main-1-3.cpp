#include <iostream>
#include <stdlib.h>

extern int num_count(int array[], int n, int number);

int main(){
    int array[] = {1,2,3,4,5};
    int arraySize = sizeof(array)/sizeof(array[0]);
    int findNumber = 5;

    std::cout << "The number is: " << num_count(array, arraySize, findNumber) << std::endl;

    return 0;
}

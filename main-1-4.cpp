#include <iostream>
#include <stdlib.h>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(){
    int array[] = {1,2,3,4,5};
    int secondarray[] = {6,7,8,9,10};
    int arraySize = 5;

    std::cout << "The number is: " << sum_two_arrays(array, secondarray, arraySize) << std::endl;

    return 0;
}
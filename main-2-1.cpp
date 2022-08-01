#include <iostream>
#include <stdlib.h>

extern int min_element(int array[], int n);

int main(){
    int array[] = {1,2,3,4,5};
    int n = 5;

    std::cout << "The number is: " << min_element(array, n) << std::endl;

    return 0;
}
#include <iostream>
#include <stdlib.h>

extern int median_array(int array[], int n);

int main(){
    int array[] = {1,2,3,4,5};
    int n = 5;

    std::cout << "The number is: " << median_array(array, n) << std::endl;

    return 0;
}



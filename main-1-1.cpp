#include <iostream>
#include <stdlib.h>

extern int sum_diagonal(int array[4][4]);

int main(){
    int array[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};

    

    std::cout << "The number is: " << sum_diagonal(array) << std::endl;

    return 0;
}




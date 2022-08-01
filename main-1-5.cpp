#include <iostream>
#include <stdlib.h>

extern int count_evens(int number);

int main(){
    int number = 10;

    std::cout << "The number is: " << count_evens(number) << std::endl;

    return 0;
}
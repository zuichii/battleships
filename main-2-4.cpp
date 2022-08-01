#include <iostream>
#include <stdlib.h>

extern bool is_ascending(int array[], int n);

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;

    is_ascending(array, n);

    return 0;
}
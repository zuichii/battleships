#include <iostream>
#include <stdlib.h>

extern bool is_fanarray(int array[], int n);

int main(){
    int array[] = {1,2,3,3,4,5};
    int n = 6;

    is_fanarray(array, n);

    return 0;
}


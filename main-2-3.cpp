#include <iostream>
#include <stdlib.h>

extern void two_five_nine(int array[], int n);

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;

    two_five_nine(array, n);

    return 0;
}
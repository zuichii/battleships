#include <iostream>
using namespace std;

extern void copy_doubles(double *old_array,double *new_array,int length);

int main(){
    int length = 5;
    double old_array[5] = {1,2,3,4,5};
    double new_array[5];

    copy_doubles(old_array, new_array, length);
}
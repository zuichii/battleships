#include <iostream>
using namespace std;

extern int **pointer_array(int *vals, int len);
int main(){
    int numbers[5] = {1,2,3,4,5};
    int* vals = numbers;
    int len = 5;

    pointer_array(vals, len);

   
}
#include <iostream>
using namespace std;

int **pointer_array(int *vals, int len){
    int **n;
    *n = new int[len];
    for(int i = 0; i < len; i++){
        n[i] = vals + i;
    }
    return n;

}
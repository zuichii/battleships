#include <iostream>
using namespace std;
int **pointer_array(int *vals, int len){
    
    
    int** val_ptrs = new int*[len];
    
    for(int i = 0; i < len; i++){
        *(val_ptrs+i) = (vals+i);
    }

    return val_ptrs;

}
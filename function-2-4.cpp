#include <iostream>
using namespace std;

int array_min(int integers[], int length){
    int smallest = 1;
    if(length <= 0){
        return -1;
    }
    else{
        for(int i = 0; i < length; i++){
            if (integers[i] < smallest){
                smallest = integers[i];
            }
        }
        return smallest;
    }
}


int array_max(int integers[], int length){
    int biggest = 1;
    if(length <= 0){
        return -1;
    }
    else{
        for(int i = 0; i < length; i++){
            if (integers[i] > biggest){
                biggest = integers[i];
            }
        }
        return biggest;
    }
}



int sum_min_max(int integers[], int length){
    int a = array_min(integers, length);
    int b = array_max(integers, length);
    return a + b;
}
//function that returns median
#include <iostream>
using namespace std;

int median_array(int array[], int n){
    int temp;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    if(n % 2 == 0){
        return(array[n/2]/array[(n/2)+1]);
    }
    else{
        return(array[(n/2)]);
    }
}
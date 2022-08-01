//function that given an array and its length, returns the weighted average of the array
#include <iostream>

double weighted_average(int array[], int n){
    
    int sum = 0;
    int total = 0;
    int count;
    

    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < n; j++){
            if(array[i] == array[j]){
                count = count + 1;
            }
        }
        sum = array[i] * count / n;
        total = total + sum;
        count = 0;
    }
    return total;
}
//function to return the sum of all elements in the array

int array_sum(int array[], int n){
    int sum = 0;
    
    if(n < 0){
        return 0;
    }
    else{
        for(int i = 0; i < n; i++){
            sum = sum + array[i];
        }
        return sum;
    }
}



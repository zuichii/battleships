//function that returns the maximum element in an integer array

int max_element(int array[], int n){
    
    int biggest = 1;
    if(n < 0){
        return 0;
    }
    else{
        for(int i = 0; i < n; i++){
            if (array[i] > biggest){
                biggest = array[i];
            }
        }
        return biggest;
    }
}
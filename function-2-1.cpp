//function that given an array of integers and its length, will find the minimum (smallest) number and return it

int min_element(int array[], int n){
    
    int smallest = 1;
    if(n < 0){
        return 0;
    }
    else{
        for(int i = 0; i < n; i++){
            if (array[i] < smallest){
                smallest = array[i];
            }
        }
        return smallest;
    }
}
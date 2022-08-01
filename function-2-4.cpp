//function that given an array of integers and its length, will determine if the elements are in ascending order or not

bool is_ascending(int array[], int n){

    bool valid = true;
    for(int i = 0; i < n; i++){
        if(array[i] <= array[i+1]){
            valid = true;
        }
        else{
            valid = false;
        }
        return valid;
    }
}


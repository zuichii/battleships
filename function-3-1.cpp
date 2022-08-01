//function that given an array of integers, and its length, determine if the array is a 'fan' array

bool is_fanarray(int array[], int n){
    for (int i = 0; i < n/2; i++) {
        if (i != n/2 - 1) {
                if (array[i] > array [i+1]) return false;
        }
        if (array[i] != array [n-i-1]) return false;
    }
    
    
    
    if (n % 2==1){
        if (array[n/2] < array[n/2-1]) return false;
    }
    return true;
    }

    


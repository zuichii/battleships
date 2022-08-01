//function that returns the number of elements in an array that are equal to a given parameter

int num_count(int array[], int n, int number){

    int count = 0;

    if (n < 0){
        return 0;
    }
    else{
        for (int i = 0; i < n; i++){
            if (array[i] == number){
            count = count + 1;
            }
        }
        return count;
    }
}
//function that returns the average of all elements in an integer array

double array_mean(int array[], int n){
    int sum = 0;
    double average;

    if (n < 0){
        return 0.0;

    }
    else{
        for (int i = 0; i < n; i++){
            sum = sum + array[i];
        }
        average = (double)sum/(double)n;
        return average;

    }

}
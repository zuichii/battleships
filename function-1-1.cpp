// function that return the sum of the elements along the main diagonal

int sum_diagonal(int array[4][4]){

    int sum = 0;


    for(int i = 0; i < 4; i++){
        for(int j = 0; i < 4; i++){
            if(i == j){
                sum = sum + array[i][j];
            }
            
        }
    }

    return sum;

}
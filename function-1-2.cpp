// function that determine if the matrix is an identity matrix or not

int is_identity(int array[10][10]){

    bool valid = true;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i == j && array[i][j] == 1){
                valid = true;
            }
            else{
                return 0;
            }


            if(i != j && array[i][j] == 0){
                valid = true;
            }
            else{
                return false;
            }
        
        }
    }

    if(valid == true){
        return 1;
    }

    return 0;


}
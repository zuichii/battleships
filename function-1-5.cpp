//Using a for loop, count the number of even numbers between 1 and a number we supply (inclusive)

int count_evens(int number){

    int count = 0;

    if(number < 0){
        return 0;
    }
    else{
        for(int i = number; i > 0; i--){
            if(i % 2 == 0){
                count = count + 1;
            }
        }
        return count;
    }
}

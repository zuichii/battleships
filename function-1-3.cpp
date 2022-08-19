

void copy_integers(int old_array[],int new_array[],int length){

    int* oa = old_array;
    int* na = new_array;

    
    
    for(int i = 0; i < length; i++){
        *(na + i) = *(oa + i);
        
    }
    return;


}
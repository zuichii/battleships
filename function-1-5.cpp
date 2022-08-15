int size_of_array_arr(){
    int *arr = new int[3];
    return sizeof(arr) + sizeof(int)*3; 
}
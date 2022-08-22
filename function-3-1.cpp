bool equalsArray(int *numbers1,int *numbers2,int length){
    if(length < 0){
        return false;
    }
    else{
        for(int i = 0; i < length; i++){
            if(numbers1[i] == numbers2[i]){
            }
            else{
                return false;
            }
    
        }
    }
    return true;
    
}
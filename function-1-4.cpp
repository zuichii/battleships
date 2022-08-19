
void copy_doubles(double *old_array,double *new_array,int length){
    
  

    
    
    for(int i = 0; i < length; i++){
        *(old_array + i) = *(new_array + i);
        
    }
    return;

}

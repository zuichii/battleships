#include <iostream>
using namespace std;
void copy_doubles(double *old_array,double *new_array,int length){
    
  
    //for(int i = 0; i < length; i++){
        //n = old_array + i;
        //*(new_array + i) = *n;
        
        
    //}

    for(int i = 0; i < length; i++){
        *(new_array+i) = *(old_array+i);
        
        
    }
    return;

}

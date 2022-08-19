#include <iostream>
using namespace std;
int max_sub_sum(int *nums,int length){
    int max = 0;
    int check = 0;

    for(int i = 0; i < length; i++){
        check += *(nums+i);

        if(check < 0){
            check = 0;
        }

        if(max < check){
            max = check;
        }
        return max;
    }

    return 0;



}
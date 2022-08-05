#include <iostream>
using namespace std;



bool is_palindrome(int integers[], int length){
    bool valid = true;

    for(int i = 0; i < length; i++){
        if(integers[i] != integers[length-i-1]){
            valid = false;
            break;
        }
    }
    return valid;
}


int sum_array_elements(int integers[], int length){
    int sum = 0;
    if(length <= 0){
        return -1;
    }
    else{
        for(int i = 0; i < length; i++){
        sum+= integers[i];
        }
    }
    cout << sum;
    return sum;

}


int sum_if_palindrome(int integers[], int length){
    bool p = is_palindrome(integers, length);
    if(p = true){
        return sum_array_elements(integers, length);
    }
    else{
        return -2;
    }
    return 0;
}
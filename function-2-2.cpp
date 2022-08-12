#include <iostream>
#include <cmath>
using namespace std;


int bin_to_int(int binary_digits[], int number_of_digits){
    
    int res = 0;
    int n = number_of_digits;

    for(int i = 0; i < n; i++){
        if(binary_digits[i] == 1){
            res = res + pow(2,n-i-1);
        }
    }
    return res;
    cout << res;
    
}
 
#include <iostream>
using namespace std;


extern int sum_if_palindrome(int integers[], int length);

int main(){
    int integers[5] = {1,2,3,2,1};
    int length = 5;

    cout << sum_if_palindrome(integers, length);
    

  
}
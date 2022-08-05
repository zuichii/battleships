#include <iostream>
using namespace std;


extern int is_palindrome(int integers[], int length);

int main(){
    int integers[5] = {1,2,3,2,1};
    int length = 5;

    cout << is_palindrome(integers, length);
    

  
}
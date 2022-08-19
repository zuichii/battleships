#include <iostream>
using namespace std;
extern void multiples_of_seven(int *nums,int length);
int main(){
    int length = 3;
    int array[3] = {7, 50, 1000};
    int *nums = array;

    multiples_of_seven(nums, length);
    
}
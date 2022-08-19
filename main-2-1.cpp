#include <iostream>
using namespace std;
extern void multiples_of_seven(int *nums,int length);
int main(){
    int length = 3;
    int vector[3] = {7, 50, 1000};
    int *nums = vector;

    multiples_of_seven(nums, length);
    
}
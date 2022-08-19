#include <iostream>
using namespace std;
extern int max_sub_sum(int *nums,int length);
int main(){
    int length = 10;
    int vector[10] = { 31, -41, 59, 26, -53, 58, 97, -93, -23, 84 };
    int *nums = vector;

    max_sub_sum(nums, length);

    return 0;


}
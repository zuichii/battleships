#include <iostream>
using namespace std;


extern int sum_min_max(int integers[], int length);

int main(){
    int integers[5] = {1,2,3,4,5};
    int length = 5;

    cout << sum_min_max(integers, length);
}
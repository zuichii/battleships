#include <iostream>
using namespace std;
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main(){
    int n1[] = {1,2,3,4,5};
    int n2[] = {1,2,3,4,5};
    int *numbers1 = n1;
    int *numbers2 = n2;

    equalsArray(numbers1, numbers2, 5);

}


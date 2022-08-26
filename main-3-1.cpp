#include <iostream>
using namespace std;
extern int even_numbers_above(int vals[], int above, int length);

int main(){
    int vals[5] = {1,2,3,4,5};
    int above = 3;
    int length = 5;

    even_numbers_above(vals, above, length);
}
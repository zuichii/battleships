//function that Given a positive decimal number, write a function that transforms it into binary, and prints out the result
#include <iostream>
using namespace std;

void print_binary_str(std::string decimal_number){
    int d = stoi(decimal_number);

    int i;

    int array[10];
    for(i = 0; d > 0; i++){
        array[i] = d % 2;
        d /= 2;
    }

    for(i = i-1; i >= 0; i--){
        cout << array[i];
    }
    cout << endl;
    return;

}
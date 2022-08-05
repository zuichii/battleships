//function that Given a positive decimal number, write a function that transforms it into binary, and prints out the result
#include <iostream>
using namespace std;

void print_binary_str(std::string decimal_number){
    int n = stoi(decimal_number);

    int i;

    int array[32];
    for(i = 0; n > 0; i++){
        array[i] = n % 2;
        n = n/2;
    }

    for(i = i-1; i >= 0; i--){
        cout << array[i];
    }
    cout << endl;
    return;

}
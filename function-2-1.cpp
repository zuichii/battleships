//function that Given a positive decimal number, write a function that transforms it into binary, and prints out the result
#include <iostream>
using namespace std;



void print_binary_str(std::string decimal_number){
   
    int number = stoi(decimal_number);
    int i = 0;
    int binaryArray[10];

    while(number > 0){
        binaryArray[i] = number % 2;
        number = number / 2;
        i++;
    }

    for(int j = i - 1; j >= 0; j--){
        cout << binaryArray[j];
    }
    cout << endl;

    return;



}
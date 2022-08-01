//function that given an array of integers and the length of the array, will count the amount of times the numbers 2, 5 and 9 appear using a switch statement.
#include <iostream>
using namespace std;

void print_pass_fail(char grade){

    switch(grade){
        case 'A':
            cout << "Pass" << endl;
            break;
        case 'B':
            cout << "Pass" << endl;
            break;
        case 'C':
            cout << "Pass" << endl;
            break;
        case 'D':
            cout << "Fail" << endl;
            break;
        case 'E':
            cout << "Fail" << endl;
            break;
        default:
            cout << "Nothing" << endl;
    }
    return;
}
    

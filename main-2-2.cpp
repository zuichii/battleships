#include <iostream>


extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
    int binary_digits[] = {1,0,0,0,1};
    int number_of_digits = 5;

    std::cout << "The number is: " << binary_to_int(binary_digits, number_of_digits) << std::endl;
    

  
}
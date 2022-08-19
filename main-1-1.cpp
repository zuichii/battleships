#include <iostream>
#include <string>

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main(){
    int n = 3;
    std::string first[n][2] = {{"one", "two"}, {"three", "four"}, {"five", "six"}};
    std::string second[n][2];

    string_2d_copy(first, second, n);

    return 0;


}
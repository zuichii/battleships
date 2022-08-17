#include <iostream>
#include <string>

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main(){
    int n = 3;
    std::string first[][2] = {{"Green","Blue"}, {"Yellow", "Red"}, {"Purple", "Pink"}};
    std::string second[n][2];
    
    return 0;

}
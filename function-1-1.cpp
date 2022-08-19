#include <iostream>
#include <string>
using namespace std;

void string_2d_copy(std::string first[][2], std::string second[][2], int n){
    for(int i = 0; i < 3; i++ ){
        for(int j = 0; i < 2; j++){
            second[i][j] = first[i][j];
        }
    }
    return;
}
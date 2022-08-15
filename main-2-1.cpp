#include <iostream>
#include <string>
using namespace std;
extern float arithmetic_ops(float left, float right, string op);

int main(){
    string op = "add";
    float left = 1.9;
    float right = 2.0;

    cout << arithmetic_ops(left, right, op);
}
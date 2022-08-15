#include <iostream>

float add_op(float left, float right){
    return left + right;
}

float subtract_op(float left, float right){
    return left - right;
}

float arithmetic_ops(float left, float right, std::string op){
    if(op == "add"){
        return add_op(left, right);
    }
    if(op == "subtract"){
        return subtract_op(left, right);
    }
    return 0;
}

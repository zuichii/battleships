#include <iostream>
using namespace std;
extern int tax_bracket_lookup(int income);
int main(){
    int income = 1000;
    tax_bracket_lookup(1000);
}

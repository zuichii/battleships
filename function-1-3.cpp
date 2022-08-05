//function that count the number of times each number 0-9 appears
#include <iostream>
using namespace std;

void count_digits(int array[4][4]){

    int zeros = 0;
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;
    int fives = 0;
    int sixes = 0;
    int sevens = 0;
    int eights = 0;
    int nines = 0;
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            switch(array[i][j]){
                case 0:
                    zeros = zeros + 1;
                    break;
                case 1:
                    ones = ones + 1;
                    break;
                case 2:
                    twos = twos + 1;
                    break;
                case 3:
                    threes = threes + 1;
                    break;
                case 4:
                    fours = fours + 1;
                    break;
                case 5:
                    fives = fives + 1;
                    break;
                case 6:
                    sixes = sixes + 1;
                    break;
                case 7:
                    sevens = sevens + 1;
                    break;
                case 8:
                    eights = eights + 1;
                    break;
                case 9:
                    nines = nines + 1;
                    break;
            
            }


        } 
    }
    cout << "0:" << zeros << ";1:" << ones << ";2:" << twos << ";3:" << threes << ";4:" << fours << ";5:" << fives << ";6:" << sixes << ";7:" << sevens << ";8:" << eights << ";9:" << nines << ";" << std::endl;
    return;
}
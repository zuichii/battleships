
#include <cmath>
#include <iostream>
using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits) {
  int sum = 0;
  int ans = 0;
  int n = number_of_digits;
  int power = 0;

  for (int i = n; i > 0; i--) {
    ans = (binary_digits[i]) * pow(2, power);
    power ++;
    sum = sum + ans;
   
  }
  cout << sum;

  return sum;
}
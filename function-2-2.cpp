
#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits) {
  int sum = 0, ans = 0;

  for (int i = 0; i < number_of_digits; i++) {
    ans = (binary_digits[i]) * pow(2, number_of_digits - 1);
    number_of_digits--;
    sum = sum + ans;
  }
  return sum;
}
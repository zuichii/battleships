#include <iostream>
using namespace std;
extern int sum_middle_row_column(int **vals, int num_rows, int num_cols);
int main(){
    int row1[3] = {1,2,3};
    int row2[3] = {4,5,6};
    int row3[3] = {7,8,9};
    int *vals[] = {row1,row2,row3};
    int num_rows = 3;
    int num_cols = 3;

    sum_middle_row_column(*vals, num_rows, num_cols);

}

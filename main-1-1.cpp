extern void printNumbers(int *numbers,int length);
int *readNumbers();

int main(){
    int length = 10;
    int *numbers = readNumbers();
    printNumbers(numbers, length);
}

extern void printNumbers(int *numbers,int length);
extern int *readNumbers();

int main(){
    int length = 10;
    int *numbers = readNumbers();
    printNumbers(numbers, length);
}

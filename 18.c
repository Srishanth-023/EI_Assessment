#include <stdio.h>

int sum(int number1, int number2){
    return number1 + number2;
}

int main(){
    int number1 = 1;
    int number2 = 2;

    int result = sum(number1, number2);

    printf("Sum = %d", result);
}
#include <stdio.h>

int subtraction(int number1, int number2){
    return number1 - number2;
}

int main(){
    int number1 = 10;
    int number2 = 5;

    int result = subtraction(number1, number2);

    printf("The difference of 10 and 5 is %d", result);
}
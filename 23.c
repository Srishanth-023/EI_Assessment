#include <stdio.h>

int subtraction(int number1, int number2){
    return number2 - number1;
}

int main(){
    int oneDigitNumber = 1;
    int twoDigitNumber = 10;

    int result = subtraction(oneDigitNumber, twoDigitNumber);

    printf("The difference of two numbers is %d", result);
}
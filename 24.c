#include <stdio.h>

float subtractFloatingValues(int number1, int number2){
    return number2 - number1;
}

int main(){
    float oneDigitNumber = 1.0;
    float twoDigitNumber = 10.0;

    float result = subtractFloatingValues(oneDigitNumber, twoDigitNumber);

    printf("The difference of two numbers is %.2f", result);
}
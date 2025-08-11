#include <stdio.h>

float addFloatUserInput(float number1, float number2){
    return number1 + number2;
}

int main(){
    float number1, number2;

    printf("Enter number 1: ");
    scanf("%f", &number1);
    printf("Enter number 2: ");
    scanf("%f", &number2);

    float result = addFloatUserInput(number1, number2);

    printf("The sum of two floating values is %.2f", result);
}
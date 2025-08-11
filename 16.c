#include <stdio.h>

float addFloat(float number1, float number2){
    return number1 + number2;
}

int main(){
    float number1 = 1.0;
    float number2 = 2.0;

    float result = addFloat(number1, number2);

    printf("The sum of two floating values is %.2f", result);
}
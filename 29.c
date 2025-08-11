#include <stdio.h>

float multiplicationOfFloatingValue(int number1, int number2){
    return number1 * number2;
}

int main(){
    float number1 = 2.0;
    float number2 = 10.0;

    float result = multiplicationOfFloatingValue(number1, number2);

    printf("The multiplication of two floating values is %.2f", result);
}
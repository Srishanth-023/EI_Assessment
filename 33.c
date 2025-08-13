#include <stdio.h>

float quotientFunction(int number1, int number2){
    return (float)number1 / number2;
}

int remainderFunction(int number1, int number2){
    return number1 % number2;
}

int main(){
    int number1, number2;

    printf("Enter number 1: ");
    scanf("%d", &number1);
    printf("Enter number 2: ");
    scanf("%d", &number2);

    float quotientOutput = quotientFunction(number1, number2);
    int remainderOutput = remainderFunction(number1, number2);

    printf("The quotient of division of two numbers is %.2f\n", quotientOutput);
    printf("The remainder of division of two numbers is %d", remainderOutput);
}
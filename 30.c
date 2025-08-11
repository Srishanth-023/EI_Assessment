#include <stdio.h>

int multiply(int number1, int number2, int number3){
    return number1 * number2 * number3;
}

int main(){
    int number1, number2, number3;

    printf("Enter number 1: ");
    scanf("%d", &number1);
    printf("Enter number 2: ");
    scanf("%d", &number2);
    printf("Enter number 3: ");
    scanf("%d", &number3);

    int result = multiply(number1, number2, number3);

    printf("The multiplication of 3 numbers is %d", result);
}
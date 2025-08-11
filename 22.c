#include <stdio.h>

int subtraction(int number1, int number2){
    return number1 - number2;
}

int main(){
    int number1, number2;

    printf("Enter number 1: ");
    scanf("%d", &number1);
    printf("Enter number 2: ");
    scanf("%d", &number2);

    int result = subtraction(number1, number2);

    printf("The difference of two numbers is %d", result);
}
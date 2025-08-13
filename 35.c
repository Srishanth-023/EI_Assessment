#include <stdio.h>
#include <stdlib.h>

int modulus(int number1, int number2){
    return number1 % number2;
}

int main(){
    int number1, number2;

    printf("Enter number 1: ");
    scanf("%d", &number1);
    printf("Enter number 2: ");
    scanf("%d", &number2);

    int result = modulus(number1, number2);

    printf("The modulus of two numbers is %d", result);
}
#include <stdio.h>

int add(int number1, int number2){
    return number1 + number2;
}

int main(){
    int number1, number2;

    printf("Enter number 1: ");
    scanf("%d", &number1);
    printf("Enter number 2: ");
    scanf("%d", &number2);

    int result = add(number1, number2);

    printf("The sum of two numbers is %d", result);
}
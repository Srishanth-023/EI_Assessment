#include <stdio.h>

int subtraction(int number1, int number2){
    if (number1 > number2){
        return number1 - number2;
    } else if (number2 > number1){
        return number2 - number1;
    } else{
        return number1 - number2;
    }
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
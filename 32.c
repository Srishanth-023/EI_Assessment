#include <stdio.h>
#include <stdlib.h>

float division(int number1, int number2){
    if (number2 == 0){
        printf("Avoid division by 0");
        exit(1);
    } else{
        return (float)number1 / number2;
    }
}

int main(){
    int number1, number2;

    printf("Enter number 1: ");
    scanf("%d", &number1);
    printf("Enter number 2: ");
    scanf("%d", &number2);

    float result = division(number1, number2);

    printf("The division of two numbers is %.2f", result);
}
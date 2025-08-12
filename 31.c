#include <stdio.h>

int division(int number1, int number2){
    return number1 / number2;
}

int main(){
    int number1 = 20;
    int number2 = 5;

    float result = division(number1, number2);

    printf("The division of 20 and 5 is %.2f", result);
}
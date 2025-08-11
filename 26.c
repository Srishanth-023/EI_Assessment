#include <stdio.h>

int multiplication(int number1, int number2){
    return number1 * number2;
}

int main(){
    int number1 = 4;
    int number2 = 5;

    int result = multiplication(number1, number2);

    printf("The multipplication of two numbers is %d", result);
}
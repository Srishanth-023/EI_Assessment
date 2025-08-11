#include <stdio.h>

int sum(int number1, int number2){
    return number1 + number2;
}

int main(){
    int number1 = 1;
    int number2 = 22;

    int result = sum(number1, number2);

    printf("The sum of two numbers is %d", result);
}
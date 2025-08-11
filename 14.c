#include <stdio.h>

int sum(int number1, int number2, int number3){
    return number1 + number2 + number3;
}

int main(){
    int number1 = 1;
    int number2 = 2;
    int number3 = 3;

    int result = sum(number1, number2, number3);

    printf("The sum of 3 numbers is %d", result);
}
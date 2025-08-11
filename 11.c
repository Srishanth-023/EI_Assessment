#include <stdio.h>

int sum(int number1, int number2){
    return number1 + number2;
}

int main(){
    int number1 = 2;
    int number2 = 3;

    int result = sum(number1, number2);

    printf("The sum of 2 and 3 is %d", result);
}
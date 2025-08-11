#include <stdio.h>

int sum(int number1, int number2){
    return number1 + number2;
}

int main(){
    int a = 1;
    int b = 2;

    int result = sum(a, b);

    printf("The sum of a and b is %d", result);
}
#include <stdio.h>

int multiplication(int number){
    return number * 10;
}

int main(){
    int number = 4;

    int result = multiplication(number);

    printf("The multipplication of a number by 10 is %d", result);
}
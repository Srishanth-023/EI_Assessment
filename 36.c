#include <stdio.h>

int main(){
    int number;

    printf("Enter a number (2 digit would be better): ");
    scanf("%d", &number);

    int extractLastDigit = number % 10;

    printf("The last digit of %d is %d", number, extractLastDigit);
}
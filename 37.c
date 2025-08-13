#include <stdio.h>

int main(){
    int number;

    printf("Enter a 2 digit number: ");
    scanf("%d", &number);

    int extractFirstDigit = number / 10;

    printf("The fiest digit of %d is %d", number, extractFirstDigit);
}
#include <stdio.h>

int main(){
    int number;

    printf("Enter a number (2 digit would be better): ");
    scanf("%d", &number);

    int removeOnesDigit = number / 10;

    int tensDigit = removeOnesDigit % 10;

    printf("The tens digit of %d is %d", number, tensDigit);
}
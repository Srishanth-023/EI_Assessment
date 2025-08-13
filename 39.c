#include <stdio.h>

int main(){
    int number;

    printf("Enter a number (2 digit would be better): ");
    scanf("%d", &number);

    int onesDigit = number % 10;

    int tensDigit = (number/ 10) % 10;

    printf("The ones digit of %d is %d\n", number, onesDigit);
    printf("The tens digit of %d is %d", number, tensDigit);
}
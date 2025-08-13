#include <stdio.h>

int main(){
    int number;

    printf("Enter a 2 digit number: ");
    scanf("%d", &number);

    int onesDigit = number % 10;

    int tensDigit = (number / 10) % 10;

    int sumOfTwoDigitNumber = onesDigit + tensDigit;

    printf("The sum of digits in a 2 digit number, %d is %d", number, sumOfTwoDigitNumber);
}
#include <stdio.h>
#include <conio.h>
void main()
{

    int number1, number2, sum;

    printf("Please, Enter First integer: ");
    scanf("%d", &number1);
    printf("\nNow Please, Enter Second integer: ");
    scanf("%d", &number2);
    sum = number1 + number2;

    printf("Summation of two numbers- %d + %d = %d", number1, number2, sum);
    return 0;
}
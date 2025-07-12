//Problem Name: Program to determine the summation of two floats/real numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    float number1, number2, number3, sum;
    printf("Enter the value of three numbers:");
    scanf("%f%f%f", &number1, &number2, &number3);
    sum = number1 + number2 + number3;
    printf("The summation of three float number is=%.2f", sum);
    getch();
}
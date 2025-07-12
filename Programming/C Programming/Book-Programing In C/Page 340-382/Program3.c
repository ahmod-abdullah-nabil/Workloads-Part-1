//Problem Name: Program to determine the summation of two integer numbers using function or I/O operators.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    int number1, number2, result;
    printf("Enter the value of two numbers:");
    scanf("%d %d", &number1, &number2);
    result = number1 + number2;
    printf("The summation of two intreger is =%d", result);
    getch();
}
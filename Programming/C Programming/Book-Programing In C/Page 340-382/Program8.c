//Problem Name: A program to find the square root of an integer.
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    system("cls");
    int n, SquareRoot;
    printf("Enter the value of n:");
    scanf("%d", &n);
    SquareRoot = sqrt(n);
    printf("The result is=%d", SquareRoot);
    getch();
}
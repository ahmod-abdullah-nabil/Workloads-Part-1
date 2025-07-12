//Problem Name: A program to determine the absolute value of a number.
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    system("cls");
    int n,AbsoluteValue;
    printf("Enter the value of n:");
    scanf("%d",&n);
    AbsoluteValue=abs(n);
    printf("The result is=%d",AbsoluteValue);
    getch();
}
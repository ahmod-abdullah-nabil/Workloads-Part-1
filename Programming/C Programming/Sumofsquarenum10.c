//Problem Name: Program to determine summation of first 10 square numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, t, sum = 0;
    for (i = 1; i < 20; i++)
    {
        t = i * i;
        sum = sum + t;
    }
    printf("Sum of square of 1 to 10 Number =%d", sum);
    getch();
}
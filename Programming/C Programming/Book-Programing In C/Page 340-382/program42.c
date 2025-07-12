//Problem Name: Determine the summation of 1+3+5+...+100=? Or determine the summation of odd numbers from 1 to 100 using for loop.
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    system("cls");
    int i, sum = 0;
    for (i = 1; i <= 100; i = i + 2)
        sum = sum + i;
    printf("The summation of 1+3+5+....+100 = %d", sum);
    getch();
}
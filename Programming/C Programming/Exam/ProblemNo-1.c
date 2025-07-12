//*Problem Name: Program to determine the summation of- 1+3+5+7+.....+99.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    int sum = 0;
    for (int i = 1; i < 100; i = i + 2)
    {
        sum += i;
    }
    printf("%d", sum);
    getch();
}
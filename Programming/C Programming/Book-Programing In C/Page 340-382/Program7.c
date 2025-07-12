//Problem Name: Program to display real numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    float x;
    x=789.456321;
    printf("\n%f",x);
    printf("\n%2.4f",x);
    printf("\n%7.3f",x);
    printf("\n%4.4f",x);
    printf("\n%-5.3f",x);
    printf("\n%07.5f",x);
    getch();
}
//Problem Name: Program to display integer numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    int x;
    long y;
    x=789;
    y=456987;
    printf("%d",x);
    printf("\n%10d",x);
    printf("\n%05d",x);
    printf("\n%-5d",x);
    printf("\n%Ld",y);
    printf("\n%10Ld",y);
    printf("\n%010Ld",y);
    getch();
}
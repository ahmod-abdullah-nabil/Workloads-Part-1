//Problem Name: Input and determine if the years is Leap year or not.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    int Year, x,y,z;
    printf("Enter Year=");
    scanf("%d", &Year);
    x=Year%4;
    y=Year%100;
    z=Year%400;
    if ((x==0&&y!=0)||z==0)
    printf("This is a Leap Year.");
    else
    printf("This is not a Leap Year.");
    getch();
}

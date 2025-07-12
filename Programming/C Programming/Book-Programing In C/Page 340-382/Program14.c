//Problem Name: Program to convert days to month and days.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    int Day,Month;
    printf("Enter Days:");
    scanf("%d",&Day);
    Month=Day/30;
    Day=Day % 30;
    printf("Month=%d,Days=%d",Month,Day);
    getch();
}
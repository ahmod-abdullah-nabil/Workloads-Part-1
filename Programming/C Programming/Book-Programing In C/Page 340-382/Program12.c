//Problem Name: Program to convert kilometer to mile.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    float Kilometer, Mile;
    printf("Enter value of Kilometer=");
    scanf("%f",&Kilometer);
    Mile=0.62*Kilometer;
    printf("The conversion of Kilometer to Mile is=%.3f",Mile);
    getch();
}
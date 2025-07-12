//Problem Name: Program to determine the area of a rhombus.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    float d1,d2,Rombus_Area;
    printf("Enter the value of d1 & d2");
    scanf("%f%f",&d1,&d2);
    Rombus_Area=0.5*d1*d2;
    printf("The Area of the Rombus is=%.2f",Rombus_Area);
    getch();
}
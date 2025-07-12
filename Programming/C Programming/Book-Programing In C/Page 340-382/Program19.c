//Problem Name: Program to determine the area of a circle with diameter..
#include <stdio.h>
#include <conio.h>
#define PI 3.1416
void main()
{
    system("cls");
    float r, Circle_Area;
    printf("Enter the Radius of the circle: ");
    scanf("%f", &r);
    Circle_Area = PI * r * r;
    printf("The Area of the Circle is=%.3f", Circle_Area);
    getch();
}
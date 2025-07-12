//Problem Name: Program to determine the area of a rectangle.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    float Length, Width, Rectangle_Area;
    printf("Enter the value of Length and Width:");
    scanf("%f%f", &Length, &Width);
    Rectangle_Area = Length * Width;
    printf("The Area of Reactangle is=%f", Rectangle_Area);
    getch();
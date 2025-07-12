//Problem Name: Program to convert centimeter to inch.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    float Centimeter, Inch;
    printf("Enter the vale of Centimeter: ");
    scanf("%f", &Centimeter);
    Inch = Centimeter / 2.54;
    printf("The conversion of Centimeter to inch=%.3f", Inch);
    getch();
}
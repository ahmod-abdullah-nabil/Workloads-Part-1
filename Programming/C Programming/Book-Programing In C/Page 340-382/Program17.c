//Problem Name: Program to determine the area of a square.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    float arm,Square_Area;
    printf("Enter the value of arm: ");
    scanf("%f",&arm);
    Square_Area= arm*arm;
    printf("The Area of Square is=%3.f",Square_Area);
    getch();
}
//Problem Name: Program to determine the area of a Trapezium.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    float Length, Width, Height, Trapezodial_Area;
    printf("Enter the value of Length, Width and Height of the Trapeziam:");
    scanf ("%f%f%f",&Length, &Width, &Height);
    Trapezodial_Area=0.5*(Length+Width)*Height;
    printf("\nThe Area of the Trapeziam is=%.3f",Trapezodial_Area);
    getch();
}
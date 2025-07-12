//Problem Name: Program to determine the area and volume of a sphere.
#include <stdio.h>
#include <conio.h>
#define PI 3.1416
void main() 
{
    system("cls");
    float Redius,Sphere_Area,Sphere_Volume;
    printf("Enter the value of the Redius= ");
    scanf ("%f",&Redius);
    Sphere_Area=4*PI*Redius*Redius;
    Sphere_Volume=(4/3)*PI*Redius*Redius*Redius;
    printf("The Area of Sphere is=%.3f\n",Sphere_Area);
    printf("The Volume of Sphere=%.3f",Sphere_Volume);
    getch();
}
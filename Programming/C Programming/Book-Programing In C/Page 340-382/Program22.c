//Problem Name: Program to determine the area of a Right triangle.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    float Base,Height,Triangle_Area;
    printf("Enter the value of Base and Height:");
    scanf("%f%f",&Base,&Height);
    Triangle_Area=0.5*Base*Height;
    printf("The Area of the Triangle is=%3.f",Triangle_Area);
    getch();
}
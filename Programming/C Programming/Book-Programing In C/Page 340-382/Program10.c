//Problem Name: Program to convert farenheight temperature to centigrade temperature.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    float Farenheight, Centigrade;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &Farenheight);
    Centigrade = (Farenheight - 32) * 5 / 9;
    printf("\nThe Celsius Temperature is=%f", Centigrade);
    getch();
}
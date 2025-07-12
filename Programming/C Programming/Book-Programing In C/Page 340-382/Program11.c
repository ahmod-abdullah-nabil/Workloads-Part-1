//Problem Name: Program to convert centigrade temperature to farenheight temperature.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    float Centigrade, Farenheight;
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &Centigrade);
    Farenheight = ((Centigrade * 9) / 5) + 32;
    printf("\nThe Farenheight Temperature is=%f", Farenheight);
    getch();
}
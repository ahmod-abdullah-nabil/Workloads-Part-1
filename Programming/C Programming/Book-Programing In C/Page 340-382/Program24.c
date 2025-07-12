//Problem Name: Program to determine Compound Interest.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    system("cls");
    float p,r,n,i,f;
    printf("Enter the value of Principle value, Interest Rates and Number Of Years: ");
    scanf("%f%f%f",&p,&r,&n);
    i=r/100;
    i=i+1;
    f=p*(pow(i,n));
    printf("\nThe final value is=%.3f",f);
    getch();
}
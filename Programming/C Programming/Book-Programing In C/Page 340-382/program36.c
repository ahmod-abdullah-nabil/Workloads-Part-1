//Problem Name: Print odd numbers from 1 to 50.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    system("cls");
    int i;
    printf("The odd numbers between 1 to 50:");
    for(i=1;i<=50;i=i+2)
    printf("\t%d",i);
    getch();
}
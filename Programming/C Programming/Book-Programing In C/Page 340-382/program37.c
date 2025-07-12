//Problem Name: Print even numbers from 1 to 50.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i;
    printf("The even numbers between:");
    for(i=2;i<=50;i=i+2)
    printf("/n%d",i);
    getch();
}
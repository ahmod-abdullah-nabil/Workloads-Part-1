//Problem Name: Determine the summation of 1 to 100.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    system("cls");
    int i,sum=0;
    for(i=1;i<=100;i++)
    sum=sum+i;
    printf("The summation of 1+2+3+.....+100 = %d",sum);
    getch();
}
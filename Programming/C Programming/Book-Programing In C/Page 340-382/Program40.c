//Problem Name: Determine the summation of the series: 1+3+5+...+n=?
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
    system("CLS");
    int i,n,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i=i+2);
    printf("The summation of 1+3+5+...n=%d",sum);
    getch();
}
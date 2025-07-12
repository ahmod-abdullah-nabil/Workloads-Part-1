//Problem Name: Determine the summation of the series: 1+3+5+...+(n-1)=?
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    system("cls");
    int i,N,sum=0;
    printf("enter the value of N:");
    scanf("%d",&N);
    for(i=1;i<=N-1;i=i+2)
    sum=sum+i;
    printf("The summation of 1+3+5+....+(N-1) = %d",sum);
    getch();
}
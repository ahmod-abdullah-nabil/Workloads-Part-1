//Problem Name: Program for swapping/interchaging two numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
    system("cls");
    int i,j,temp;
    printf("The value of i & j:");
    scanf("%d%d",&i,&j);
    printf("Before Swapping: ");
    printf("\n The value of i=%d,j=%d",i,j);
    temp=i;
    i=j;
    j=temp;
    printf("\n After Swapping:");
    printf("\n The value of is=%d,j=%d",i,j);
    getch();
} 
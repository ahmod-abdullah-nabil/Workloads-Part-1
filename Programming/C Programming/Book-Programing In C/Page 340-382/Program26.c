//Problem Name: Input a set of number and determine if they are even or odd.
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    system("cls");
    int n;
    printf("\nEnter the value of n:");
    scanf("%d",&n);
    if (n%2==0)
    printf("%d is an even number.",n);
    else                                                                                                                                                                 
    printf("\n%d is an odd numebr.",n);
    getch();
}
////Problem Name: Determine the largest number among two numbers.
#include<stdio.h>
#include<conio.h>
void main () 
{
    system("cls");
    int Number1,Number2;
    printf("enter the value of two numbers:");
    scanf("%d%d",& Number1,&Number2);
    if(Number1>Number2)
    printf("The largest number is number1=%d",Number1);
    else
    printf("The largest nunber is number2  %d",Number2);
    getch(); 
}
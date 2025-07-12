//Problem Name: Determine the largest number among three numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    int number1,number2,number3;
    printf("\nEnter the value of the first number:");
    scanf("%d", &number1);
    printf("\nEnter the value of the second number:");
    scanf("%d", &number2);
    printf("\nEnter the value of the first number:");
    scanf("%d", &number3);
    if (number1>number2)
    {
        if(number1>number3)
        printf("The largest number is numebr1 & the value is=%d",number1);
        else
        printf("The largest number is numebr3 & the value is=%d",number3);
    }
    else
    {
        if(number3>number2)
        printf("The largest number is numebr3 & the value is=%d",number3);
        else
        printf("The largest number is numebr2 & the value is=%d",number2);
    }
    getch();
}
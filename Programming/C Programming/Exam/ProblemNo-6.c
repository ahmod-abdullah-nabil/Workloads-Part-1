//Problem Name: Program to determine if its a even number.
#include <stdio.h>
void main()
{
    int num1, NUM;
 
    printf("Enter the value of the number: ");
    scanf("%d", &num1);
    NUM = num1 % 2;
    if (NUM == 0)
        printf("%d is not an odd number.\n", num1);
    else
        printf("%d is an odd number.\n", num1);
}
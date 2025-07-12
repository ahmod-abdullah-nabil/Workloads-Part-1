//Problem Name: Program to determine negative or positive number or 0.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any value for the number: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("The number is positive.");
    }
    else
    {
        printf("The number is negative.");
    }
    if (num == 0)
    {
        printf("The number is not positive or even negative.");
    }
    return 0;
}
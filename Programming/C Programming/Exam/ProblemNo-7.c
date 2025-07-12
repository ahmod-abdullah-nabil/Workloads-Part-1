//Problem Name: Program to determine if its a odd number.
#include <stdio.h>
void main()
{
    int num1, NUM;
    //as we know [If the number is devided by 2 then it's a even or it's and odd number.].
    printf("Enter the value of the number: ");
    scanf("%d", &num1);
    NUM = num1 % 2;
    if (NUM == 0)
        printf("%d is an even number.\n", num1);
    else
        printf("%d is not an even number.\n", num1);
}
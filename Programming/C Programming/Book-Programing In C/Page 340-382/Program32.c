//Problem Name: Subject to conditions determine the factorial of (n) a positive number.
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    system("cls");
    int i, n, fact = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Negative numbers are not allowed.");
    }
    else if (n == 0)
        printf("Factorial of %d is:%d", n, fact);
    else
    {
        for (i = 2; i <= n; i++)
            fact = fact * i;
        printf("Factorial of %d is:%d", n, fact);
    }
    getch();
}
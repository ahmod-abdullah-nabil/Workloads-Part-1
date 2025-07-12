//Problem Name: Program to determine the summation of- 10+99+98+97+......+1.
#include <stdio.h>
#include <conio.h>
main()
{
    int i, sum = 0;
    for (i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    printf("Sum of number 1 to 100 =%d", sum);
    return 0;
}
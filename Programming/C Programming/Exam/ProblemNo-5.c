//Problem Name: Program to determine the summation of- 1²+2²+3²+4²+....+n².
#include <stdio.h>
int main()
{
  int n, sum = 0;

  printf("Enter the value of the number: ");
  scanf("%d", &n);

  for (int i = 0; i <= n; i++)
  {
    sum += (i * i);
  }

  printf("Sum of squares of first %d natural numbers = %d", n, sum);

  return 0;
}
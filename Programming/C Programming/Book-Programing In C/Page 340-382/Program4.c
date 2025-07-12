//Problem Name: C Program using I/O operators.
#include <stdio.h>
#include <conio.h>
void main()
{
    system("cls");
    int x, y, z, n, m, p, q;
    printf("Enter the value of x,y,z :");
    scanf("%d%d%d", &x, &y, &z);
    m = 5 * x + 3 * x + 7;
    n = x / y + z;
    p = ((x + y) * (y * z)) / (2 * x * y);
    q = x ^ y;
    printf("m=%d", m);
    printf("\nn=%d", n);
    printf("\np=%d", p);
    printf("\nq=%d", q);
    getch();
}
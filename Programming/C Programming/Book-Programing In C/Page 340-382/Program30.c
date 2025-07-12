//Problem Name: Input three numbers and determine if a triangle is possible. If it is then determine the area of the triangle.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    system("cls");
    float a,b,c,S,Triangle_Area;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);
    if ((a+b)>c && (b+c)>a && (c+a)>b)
    {
        S=(a+b+c)/2;
        Triangle_Area=sqrt(S*(S-a)*(S-b)*(S-c));
        printf("The Triangle Area is=%.2f",Triangle_Area);    
    }
    else
    printf("The trianle is not possible");
    getch();
}
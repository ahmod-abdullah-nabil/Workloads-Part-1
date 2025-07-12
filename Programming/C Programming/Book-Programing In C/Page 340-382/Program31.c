//Problem Name: A program to determine the real, equal and root of the equation: a*x + b*x + c = 0.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
    system ("cls");
    float a,b,c,d,x,x1,x2;
    printf("enter the value of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        x=-b+(2*a);
        printf("The roots are equal & they are:x=%f,x=%f",x,x);
    }
    else if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("The roots are:x1=%f,and x2=%f",x1,x2);
    
    }
        else
        printf("The roots are imaginary");
        getch();
}
//Problem Name: To determine Young's coefficient we use the equation: y=m*g*L/π*r*r*l. While m= Actual mass, L= The length of the wire, r=Wire radius and l= Cable extension then make a program to determine the value of Y.
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define Pi 3.14
#define g 9.8
void main()
{
    system("cls");
    float m,L,l,r,Y;
    printf("Enter the value of Mass(m):");
    scanf("%f",&m);
    printf("Enter the Length of te Wire(L):");
    scanf("%f",&L);
    printf("Increasein Lenght of Wire(l):");
    scanf("%f",&l);
    printf("Enter the Radius of Wire(r):");
    scanf("%f",&r);
    Y=(m*g*L)/(Pi*r*r*l);
    printf("The youngs Modulas is=%f",Y);
    getch();
} 
//Problem Name: Print numbers divisible by 5 from 5 to 50 using for loop.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    system("cls");
    int i;
    printf("The series is:");
    for( i=5;i<=50;i=i+5)
    printf("\t%d",i);
    getch();
}
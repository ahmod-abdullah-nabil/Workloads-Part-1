//Problem Name: Input and determine if the letters are Uppercase or Lowercase.
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
    system("cls");
    char alphabet;
    printf("enter an alphabet: ");
    alphabet=getchar();
    if(islower(alphabet))
    putchar(toupper(alphabet));
    else
    putchar(tolower(alphabet));
    getch();
}
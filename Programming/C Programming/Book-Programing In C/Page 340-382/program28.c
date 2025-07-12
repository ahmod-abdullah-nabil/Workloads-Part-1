//Problem Name: Determine the smallest number among three numbers. 
#include<stdio.h>
#include<conio.h>
void main()
{
    system("cls");
    int number1,number2,number3;
    printf("enter the vlue of three numbers:");
    scanf("%d%d%d",&number1,&number2,&number3);
    if(number1<number2)
    {
        if(number1<number3)
        printf("The smaller number is numebr1 and the value is= %d",number1);
        else 
        printf("The smaller number is number3 and the value is= %d",number3);
    }  
        else
        {
            if(number3<number2)
            printf("The smaller number is number3 and the value is=%d",number3);
            else
            printf("The smaller number is number2 and the value is=%d",number2);
        }
    getch();
}
#include <stdio.h>

int main()
{
        int age, time, price;

        printf("Enter the age of the customer: ");
        scanf("%d", &age);

        printf("Enter the time of the show (1 for morning, 2 for afternoon, 3 for evening): ");
        scanf("%d", &time);

        if (age < 0 || time < 1 || time > 3)
   
    {
                printf("Invalid input\n");
                return 1;
           
    }

        if (age < 12)
   
    {
                if (time == 1)
       
        {
                        price = 5;
                   
        }
                else if (time == 2)
       
        {
                        price = 7;
                   
        }
                else        
        {
                        price = 10;
                   
        }
           
    }
        else if (age <= 60)
   
    {
                if (time == 1)
       
        {
                        price = 8;
                   
        }
                else if (time == 2)
       
        {
                        price = 10;
                   
        }
                else        
        {
                        price = 15;
                   
        }
           
    }
        else    
    {
                if (time == 1)
       
        {
                        price = 6;
                   
        }
                else if (time == 2)
       
        {
                        price = 8;
                   
        }
                else        
        {
                        price = 12;
                   
        }
           
    }

        printf("The ticket price is: $%d\n", price);

        return 0;
}
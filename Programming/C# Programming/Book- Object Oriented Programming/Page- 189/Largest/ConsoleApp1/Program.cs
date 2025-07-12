using System;
class Largest
{
    static void Main()
    {
        int a, b, c;

        Console.Write("Enter a= ");
        a = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter b= ");
        b = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter c= ");
        c = Convert.ToInt32(Console.ReadLine());

        {
            if (a > b)
            {

                if (a > c)
                {
                    Console.Write("Number one is the largest!\n");
                }
                else
                {
                    Console.Write("Number three is the largest!\n");
                }
            }
            else if (b > c)
                Console.Write("Number two is the largest!\n");
            else
                Console.Write("Number three is the largest!\n");
        }

    }
}

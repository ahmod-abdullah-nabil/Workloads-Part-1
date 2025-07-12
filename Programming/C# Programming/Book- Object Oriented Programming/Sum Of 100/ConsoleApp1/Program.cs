using System;
class program
{
    public static void Main()
    {
        int num, sum = 0;
        for (num = 1; num <= 100; num++)
        {
            sum = sum + num;
        }
        Console.WriteLine("Sum = "+ sum);
        Console.ReadLine();
    }
}
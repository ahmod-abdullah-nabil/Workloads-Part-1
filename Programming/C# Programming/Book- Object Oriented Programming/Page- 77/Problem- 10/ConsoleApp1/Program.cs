using System;
class Triangle
{
    static void Main()
    {
        float a, b, c;

        Console.Write("Input side 1 of triangle: ");
        a = Convert.ToInt32(Console.ReadLine());

        Console.Write("Input side 2 of triangle: ");
        b = Convert.ToInt32(Console.ReadLine());

        Console.Write("Input side 3 of triangle: ");
        c = Convert.ToInt32(Console.ReadLine());



        if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a))
        {
            Console.Write("Triangle Not possible.\n");
        }
        else
        {
            float s = (a + b + c) / 2;
            float Area = (float)Math.Sqrt(s * (s - a) * (s - b) * (s - c));
            Console.Write("Area is= " + Area);
        }
    }
}
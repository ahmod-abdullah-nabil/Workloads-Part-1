/*
    write a c++ program to calculate the sum of the first 1000 terms
    using loop statements:

    s =  2/1 - 3/2 + 5/3 - 8/5 + ...... - ......*/

#include <iostream>

int main()
{
    long double sum = 0.0;
    long double numerator1 = 2.0, numerator2 = 3.0; // Fibonacci sequence: 2, 3, 5, 8, ...
    long double denominator = 1.0;
    bool isPositive = true;

    for (int i = 1; i <= 1000; ++i)
    {
        // Add or subtract the term based on the sign
        sum += (isPositive ? 1 : -1) * (numerator1 / denominator);

        // Update numerator using Fibonacci sequence
        long double nextNumerator = numerator1 + numerator2;
        numerator1 = numerator2;
        numerator2 = nextNumerator;

        // Update denominator (increases sequentially: 1, 2, 3, 4, ...)
        denominator = i + 1;

        // Toggle the sign for the next term
        isPositive = !isPositive;
    }

    std::cout << "The sum of the first 1000 terms is: " << sum << std::endl;

    return 0;
}

// Write a C++ program to output all prime numbers in the range of [2,1000] using loop statements.

#include <iostream>

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    for (int i = 2; i <= 1000; i++)
    {
        if (isPrime(i))
        {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}

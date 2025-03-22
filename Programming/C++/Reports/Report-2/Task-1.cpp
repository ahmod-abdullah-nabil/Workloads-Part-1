// Write a C++ program to input a positive integer and determine whether it is a prime number or not.

#include <iostream>
#include <cmath>
int main()
{
    int num;
    bool isPrime = true;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;
    if (num == 0 || num == 1)
    {
        std::cout << num << " is not a prime number." << std::endl;
        return 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
    {
        std::cout << num << " is a prime number." << std::endl;
    }
    else
    {
        std::cout << num << " is not a prime number." << std::endl;
    }
    return 0;
}

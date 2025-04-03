/*
Write a C++ function int getMaxPrime(int a[], int n) get the maximum prime from a series of integers if any. Test this function in the main function.
*/

#include <iostream>
#include <cmath>

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= std::sqrt(num); ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int getMaxPrime(int a[], int n)
{
    int maxPrime = -1;
    for (int i = 0; i < n; ++i)
    {
        if (isPrime(a[i]) && a[i] > maxPrime)
        {
            maxPrime = a[i];
        }
    }
    return maxPrime;
}

int main()
{
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int a[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    int maxPrime = getMaxPrime(a, n);
    if (maxPrime == -1)
    {
        std::cout << "No prime numbers found in the array." << std::endl;
    }
    else
    {
        std::cout << "The maximum prime number in the array is: " << maxPrime << std::endl;
    }

    return 0;
}
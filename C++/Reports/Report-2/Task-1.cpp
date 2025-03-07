// Write a C++ program to input a positive integer and determine whether it is a prime number or not.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    bool isPrime = true;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num == 0 || num == 1)
    {
        cout << num << " is not a prime number." << endl;
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
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}

#include <iostream>
#include <cmath>

int main()
{
}
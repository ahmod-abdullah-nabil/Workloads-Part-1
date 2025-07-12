/*Generate a random number in [n, m]*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int gen_rand_numbers(int n, int m)
{
    return rand() % (m - n + 1) + n;
}

int main()
{
    srand(time(NULL));
    int min, max, count;

    std::cout << "Enter the minimum value (n): ";
    while (!(std::cin >> min))
    {
        std::cout << "Invalid input! Please enter an integer: ";
        std::cin.clear();
        std::cin.ignore();
    }
    std::cout << "Enter the maximum value (m): ";

    while (!(std::cin >> max))
    {
        std::cout << "Invalid input! Please enter an integer: ";
        std::cin.clear();
        std::cin.ignore();
    }
    if (min > max)
    {
        std::cout << "Error: Minimum value cannot be greater than the maximum value." << std::endl;
        return 1;
    }

    std::cout << "How many random numbers do you want to generate? ";
    while (!(std::cin >> count) || count <= 0)
    {
        std::cout << "Invalid input! Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore();
    }

    std::cout << "Generated random numbers between " << min << " and " << max << " are:" << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << gen_rand_numbers(min, max) << " ";
    }
    std::cout << std::endl;
    std::cin.get();
    std::cin.ignore();

    return 0;
}

/*Write a C++ function int getRand(int m, int n) to generate a random number in the range of [m,n] and then in the main function, generate 10 random integers in the range of [1,100] using the getRand function and calculate the average value of these 10 numbers.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int getRand(int m, int n)
{
    return m + rand() % (n - m + 1);
}

int main()
{
    srand(time(0));
    int sum = 0;
    for (int i = 0; i < 10; ++i)
    {
        int num = getRand(1, 100);
        std::cout << "Random number " << i + 1 << ": " << num << std::endl;
        sum += num;
    }
    double average = sum / 10.0;
    std::cout << "Average value: " << average << std::endl;
    return 0;
}

#include <iostream>
using namespace std;

int findminimum(int array[], int size)
{
    int min = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

int main()
{
    const int SIZE = 10;
    int numbers[SIZE];
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> numbers[i];
    }

    int minimum = findminimum(numbers, SIZE);
    cout << "The minimum value is: " << minimum << endl;

    return 0;
}
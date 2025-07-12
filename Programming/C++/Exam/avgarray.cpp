#include <iostream>
using namespace std;

double calculateAverage(int arr[], int size)
{
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum / size;
}

int main()
{
    const int SIZE = 10;
    int numbers[SIZE];

    cout << "Enter 10 integer values:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> numbers[i];
    }

    double average = calculateAverage(numbers, SIZE);

    cout << "The average value of the array is: " << average << endl;

    return 0;
}
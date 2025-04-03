#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    const int SIZE = 10;
    int score[SIZE], i;
    double sum = 0.0, avg;

    cout << "Enter 10 numbers: ";
    for (i = 0; i < SIZE; i++)
    {
        cin >> score[i];
    }

    for (i = 0; i < SIZE; i++)
    {
        sum += score[i];
    }

    avg = sum / SIZE;

    int max = getMax(score, SIZE);

    int min = score[0];
    for (i = 1; i < SIZE; i++)
    {
        if (score[i] < min)
        {
            min = score[i];
        }
    }

    cout << "The maximum score in the array is: " << max << endl;
    cout << "The minimum score in the array is: " << min << endl;
    cout << "The average score in the array is: " << avg << endl;

    return 0;
}
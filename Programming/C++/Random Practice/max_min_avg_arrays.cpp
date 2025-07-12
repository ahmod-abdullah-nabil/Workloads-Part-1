#include <iostream>
using namespace std;

int main()
{

    const int SIZE = 10;
    int score[SIZE], i, max, min;
    double sum = 0.0, avg;

    cout << "Enter 10 numbers: ";
    for (i = 0; i < 10; i++)
    {
        cin >> score[i];
    }

    max = score[0];
    min = score[0];

    for (i = 0; i < 10; i++)
    {
        if (score[i] > max)
        {
            max = score[i];
        }
        if (score[i] < min)
        {
            min = score[i];
        }
        sum += score[i];
    }

    avg = sum / 10;

    cout << "The maximum score in the array is: " << max << endl;
    cout << "The minimum score in the array is: " << min << endl;
    cout << "The average score in the array is: " << avg << endl;

    return 0;
}

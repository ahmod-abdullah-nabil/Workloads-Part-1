#include <iostream>
using namespace std;

// Function to find maximum value in array
int findMaximum(int arr[], int size)
{
    int max = arr[0]; // Assume first element is maximum

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i]; // Update max if current element is larger
        }
    }

    return max;
}

int main()
{
    const int SIZE = 10;
    int numbers[SIZE];

    // Get input from user
    cout << "Enter 10 integer values:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Find maximum using the function
    int maximum = findMaximum(numbers, SIZE);

    // Display result
    cout << "The maximum value in the array is: " << maximum << endl;

    return 0;
}
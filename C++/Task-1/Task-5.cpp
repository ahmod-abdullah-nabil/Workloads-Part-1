// This is a basic program to “ Write a multi-way  if-else  statement  that  classifies  the  value  of  a  variable  n  into  one  of  the following categories and writes out an appropriate message.n < 0 or 0 ... n... 1 or n > 1”

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 0)
    {
        cout << "n is less than 0.";
    }
    else if (n == 0)
    {
        cout << "n is equal to 0.";
    }
    else if (n == 1)
    {
        cout << "n is equal to 1.";
    }
    else if (n > 1)
    {
        cout << "n is greater than 1." << endl;
    }
    return 0;
}
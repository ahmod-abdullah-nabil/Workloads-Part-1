// cpp program to print the palindrome abcdcba.

#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {

        for (char ch = 'a'; ch <= 'a' + i; ch++)
        {
            cout << ch;
        }
        for (char ch = 'a' + i - 1; ch >= 'a'; ch--)
        {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
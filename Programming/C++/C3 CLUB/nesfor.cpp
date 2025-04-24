// print 44 times with nested for loops

#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "PRINT!" << endl;
            count++;
        }
    }
    cout << "Printed " << count << " times" << endl;
}
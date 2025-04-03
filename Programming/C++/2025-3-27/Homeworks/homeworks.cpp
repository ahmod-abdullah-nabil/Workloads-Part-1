/* Write a program that will read up to ten letters into an array and write the letters back to the screen in the reverse order.For example, if the input is abcd.then the output should be
dcba.
*/

#include <iostream>
using namespace std;

int main()
{
    char letters[10];
    int count = 0;

    cout << "Enter up to 10 letters: ";
    while (count < 10 && cin >> letters[count])
    {
        count++;
    }

    cout << "The letters in reverse order are: ";
    for (int i = count - 1; i >= 0; i--)
    {
        cout << letters[i];
    }
    cout << endl;

    return 0;
}

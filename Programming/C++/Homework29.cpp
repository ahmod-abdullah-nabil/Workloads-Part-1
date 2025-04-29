// 20. Write some C++ code that will read a line of text and echo the line with all uppercase letters deleted.

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string input, result;

    cout
        << "Enter  of text: ";
    getline(cin, input);

    for (char c : input)
    {
        if (!isupper(c))
        {
            result += c;
        }
    }

    cout << "Text without uppercase letters: " << result << endl;

    return 0;
}
// Use C-style strings (cstring) to implement the string reversal function. That is, the user inputs a string, and the program reverses and outputs the string.

#include <iostream>
#include <cstring>

void reverseString(char str[])
{
    int length = std::strlen(str);
    for (int i = 0; i < length / 2; ++i)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main()
{
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];

    std::cout << "Enter a string: ";
    std::cin.getline(input, MAX_LENGTH);

    reverseString(input);

    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}

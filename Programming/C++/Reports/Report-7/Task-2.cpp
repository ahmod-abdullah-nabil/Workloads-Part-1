// Write a program using cstring that can obtain a string from the user, then count the number of English letters(case -insensitive), digits, and other characters in it, and output the statistical results.

#include <iostream>
#include <cstring>
#include <cctype>

void analyzeString(const char str[], int &letters, int &digits, int &others)
{
    letters = digits = others = 0;

    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (std::isalpha(str[i]))
        {
            ++letters;
        }
        else if (std::isdigit(str[i]))
        {
            ++digits;
        }
        else
        {
            ++others;
        }
    }
}

int main()
{
    const int MAX_LENGTH = 200;
    char input[MAX_LENGTH];

    std::cout << "Enter a string (max " << MAX_LENGTH - 1 << " characters): ";
    std::cin.getline(input, MAX_LENGTH);

    if (std::strlen(input) == 0)
    {
        std::cout << "Error: No input provided. Please enter a valid string." << std::endl;
        return 1;
    }

    int letters, digits, others;
    analyzeString(input, letters, digits, others);

    std::cout << "Statistics:" << std::endl;
    std::cout << "English letters: " << letters << std::endl;
    std::cout << "Digits: " << digits << std::endl;
    std::cout << "Other characters: " << others << std::endl;

    return 0;
}
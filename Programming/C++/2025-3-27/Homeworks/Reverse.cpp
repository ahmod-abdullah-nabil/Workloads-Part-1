// s a stream and reverse it in an array

// input a stream, reverse it in an array, and check if it's a palindrome

#include <iostream>
using namespace std;

int main()
{
    char s[20]; // Array to store the input string
    int n = 0, i, j;
    bool isPalindrome = true;

    // Read the input string
    cout << "Enter a string (max 20 characters): ";
    cin.getline(s, 20);

    // Find the length of the string
    while (s[n] != '\0')
    {
        n++;
    }

    // Check if the string is a palindrome while reversing it
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            isPalindrome = false; // If characters don't match, it's not a palindrome
        }
        // Reverse the string in place
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    // Print the reversed string
    cout << "Reversed string: " << s << endl;

    // Print whether the string is a palindrome
    if (isPalindrome)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
// Write a program that uses the std::string class to generate an abbreviation from an input sentence. The program can extract the first letter of each word in the sentence and combines these first letters into a new string to form the abbreviation of the sentence. Output the abbreviation and convert it to uppercase.

#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

int main()
{
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::stringstream ss(sentence);
    std::string word;
    std::string abbreviation;

    while (ss >> word)
    {
        if (!word.empty())
        {
            abbreviation += std::toupper(word[0]);
        }
    }

    std::cout << "Abbreviation: " << abbreviation << std::endl;

    return 0;
}
// Write a C++ program that uses the std::string class to count the number of words in an English sentence entered by the user. The program analyzes the entered sentence and counts the number of words it contains. Finally, it outputs the counted number of words.

#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string sentence;
    std::cout << "Enter an English sentence: ";
    std::getline(std::cin, sentence);

    std::istringstream stream(sentence);
    std::string word;
    int wordCount = 0;

    while (stream >> word)
    {
        ++wordCount;
    }

    std::cout << "The number of words in the sentence is: " << wordCount << std::endl;
    return 0;
}

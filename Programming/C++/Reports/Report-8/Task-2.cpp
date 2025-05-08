/*
Write a C++ program to count the number of various types of characters in a text file and generate a detailed statistical report. The specific requirements are as follows:
1)File Reading: The program should prompt the user to enter the name of the text file to be counted. The program needs to attempt to open the file. If the file fails to open, it should output the corresponding error message and terminate the program.
2)Character Counting: Classify and count the characters in the file. The specific classifications are as follows:
o	Letters (case - sensitive): Count the number of uppercase and lowercase letters separately.
o	Digits: Count the number of digit characters from 0 to 9.
o	Other Characters: Count the number of characters that do not belong to the above classifications.
3)Report Generation: Output the statistical results to a new text file named statistics_report.txt. The report should be in a clear and readable format, including the following content:
o	Basic information of the file: File name and file size (in bytes).
o	Statistical results of various types of characters: Number of uppercase letters, number of lowercase letters, number of digits, and number of other characters.
o	Total number of characters.
*/

#include <iostream>
#include <fstream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string fileName;
    cout << "Enter the name of the text file to analyze: ";
    cin >> fileName;

    ifstream inFile(fileName, ios::binary | ios::ate);
    if (!inFile)
    {
        cerr << "Error: Could not open file '" << fileName << "'." << endl;
        return 1;
    }

    streamsize fileSize = inFile.tellg();
    inFile.seekg(0, ios::beg);

    int uppercaseCount = 0, lowercaseCount = 0, digitCount = 0, otherCount = 0, totalCount = 0;
    char ch;

    while (inFile.get(ch))
    {
        totalCount++;
        if (isupper(ch))
        {
            uppercaseCount++;
        }
        else if (islower(ch))
        {
            lowercaseCount++;
        }
        else if (isdigit(ch))
        {
            digitCount++;
        }
        else
        {
            otherCount++;
        }
    }
    inFile.close();

    ofstream outFile("statistics_report.txt");
    if (!outFile)
    {
        cerr << "Error: Could not create the report file 'statistics_report.txt'." << endl;
        return 1;
    }

    outFile << "Statistical Report for File: " << fileName << endl;
    outFile << "----------------------------------------" << endl;
    outFile << "File Size: " << fileSize << " bytes" << endl;
    outFile << "Total Characters: " << totalCount << endl;
    outFile << "Uppercase Letters: " << uppercaseCount << endl;
    outFile << "Lowercase Letters: " << lowercaseCount << endl;
    outFile << "Digits: " << digitCount << endl;
    outFile << "Other Characters: " << otherCount << endl;

    outFile.close();

    cout << "Statistical report has been generated in 'statistics_report.txt'." << endl;

    return 0;
}
/* Write a C++ program to implement file reading and writing operations for student grade data. The requirements are as follows:
1)When the program runs, prompt the user to enter the student's name and grade, where the grade is an integer.
2)After the user finishes entering (when the user enters "end" as the name, it indicates the end of the input), write all the students' names and grades into a file named "scores.txt". Each line records the information of one student in the format of "Name:Grade".
3)Open the "scores.txt" file again, read all the students' information in it, calculate the average grade of all students, and finally output the average grade to the screen.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits>
#include <stdexcept>

using namespace std;

int main()
{
    string name;
    int grade;
    vector<pair<string, int>> students;

    cout << "Enter student name and grade (enter 'end' as the name to finish):" << endl;
    while (true)
    {
        cout << "Name: ";
        cin >> name;
        if (name == "end")
        {
            break;
        }

        cout << "Grade: ";
        while (!(cin >> grade) || grade < 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid grade. Please enter a non-negative integer: ";
        }

        students.push_back(make_pair(name, grade));
    }

    ofstream outFile("scores.txt");
    if (!outFile)
    {
        cerr << "Error: Could not open file for writing." << endl;
        return 1;
    }
    for (const auto &student : students)
    {
        outFile << student.first << ":" << student.second << endl;
    }
    outFile.close();

    ifstream inFile("scores.txt");
    if (!inFile)
    {
        cerr << "Error: Could not open file for reading." << endl;
        return 1;
    }

    string line;
    int totalGrade = 0, count = 0;
    cout << "\nReading student data from 'scores.txt'..." << endl;
    while (getline(inFile, line))
    {
        size_t delimiterPos = line.find(':');
        if (delimiterPos != string::npos)
        {
            try
            {
                string studentName = line.substr(0, delimiterPos);
                int studentGrade = stoi(line.substr(delimiterPos + 1));
                totalGrade += studentGrade;
                count++;
            }
            catch (const invalid_argument &e)
            {
                cerr << "Error: Invalid data format in file. Skipping line: " << line << endl;
            }
            catch (const out_of_range &e)
            {
                cerr << "Error: Grade value out of range in file. Skipping line: " << line << endl;
            }
        }
    }
    inFile.close();

    if (count > 0)
    {
        double averageGrade = static_cast<double>(totalGrade) / count;
        cout << "The average grade of all students is: " << averageGrade << endl;
    }
    else
    {
        cout << "No valid student data found in the file." << endl;
    }

    return 0;
}

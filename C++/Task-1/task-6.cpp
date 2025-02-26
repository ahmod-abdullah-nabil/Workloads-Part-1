/* This is a basic program to “Write a multi-way switch statement that classifies the variable score of int type into following-
categories and writes out an appropriate message.
A: score>=90
B: 80<=score<90
C: 70<=score<80
D: 60<=score<70
F: score<60 */

#include <iostream>
using namespace std;

int main()
{
    int score;
    char grade;
    string Failed;

    Failed = "You've Failed.";
    cout << "Enter the score(1-100): ";
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << "Invalid Score" << endl;
        cout << "Enter the score(1-100): ";
        cin >> score;
    }

    switch (score / 10)
    {
    case 10:
    case 9:
        grade = 'A';
        break;
    case8:
        grade = 'B';
        break;
    case7:
        grade = 'C';
        break;
    case6:
        grade = 'D';
        break;
    default:
        cout << Failed << endl;
        grade = 'F';
        break;
    }
    cout << "The grade is: " << grade << "." << endl;
}
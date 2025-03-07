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

    cout << "Enter the score(1-100): ";
    cin >> score;

    while (score < 0 || score > 100)
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
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    default:
        grade = 'F';
        break;
    }

    cout << "The grade is: " << grade << "." << endl;

    if (grade == 'F')
    {
        cout << "You've Failed.";
    }
    return 0;
}
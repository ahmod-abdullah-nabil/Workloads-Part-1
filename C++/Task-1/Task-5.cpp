// This is a basic program to “Write an if-else statement that outputs the word  Passed provided the value of the variable exam is greater than or equal to 60 and also the value of the variable programsDone is greater than or equal to 10. Otherwise, the if - else statement outputs the word Failed.The variables exam and programsDone are both of type int.”

#include <iostream>
using namespace std;

int main()
{
    int exam, programsDone;
    cout << "Enter your exam marks: ";
    cin >> exam;
    cout << "Enter the number of programs done: ";
    cin >> programsDone;

    if (exam >= 60 && programsDone >= 10)
    {
        cout << "Passed";
    }
    else
    {
        cout << "Failed" << endl;
    }
    return 0;
}

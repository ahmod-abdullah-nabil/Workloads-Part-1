// create a program using swich  case statement to find the choice.

#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "your choice is: 1";
        break;
    case 2:
        cout << "your choice is: 2";
        break;
    case 3:
        cout << "your choice is: 3";
        break;
    case 4:
        cout << "your choice is: 4";
        break;
    case 5:
        cout << "your choice is: 5";
        break;
    default:
        cout << "Invalid choice! Please enter a number between 1 and 5.";
        break;

        return 0;
    }
}
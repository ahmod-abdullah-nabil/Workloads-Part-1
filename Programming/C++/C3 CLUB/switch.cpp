// create a program using swich  case statement to find the choice.

#include <iostream>
using namespace std;
int main()
{
    int x, y, summation, multiply, divide, subtract;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    char choice;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 'a':
        summation = x + y;
        cout << "your choice is a and the summation is: " << summation << endl;
        break;
    case 'b':
        multiply = x * y;
        cout << "your choice is b and the multiplication is: " << multiply << endl;
        break;
    case 'c':
        divide = x / y;
        cout << "your choice is c and the division is: " << divide << endl;
        break;
    case 'd':
        subtract = x - y;
        cout << "your choice is d and the subtraction is: " << subtract << endl;
        break;
    default:
        cout << "Invalid choice! Please enter a-c";
        break;

        return 0;
    }
}
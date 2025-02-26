// This is a basic program to “Define three variables a, b and c of the double type, then compute and print the value a*b/c.”

#include <iostream>

using namespace std;

int main()
{
    double a, b, c, result;
    cout << "Enter the value of a, b and c: ";
    cin >> a >> b >> c;

    // We can also take input like this:
    /*
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    cout << "Enter the value of c:";
    cin >> c;
    */

    result = (a * b) / c;

    cout << "The result of a*b/c is: " << result << endl;

    return 0;
}
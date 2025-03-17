/*Write a function declaration (function prototype) and a function definition for
a function that takes three arguments, all of type int , and that returns the sum
of its three arguments.*/

#include <iostream>
using namespace std;

int sumOfThree(int a, int b, int c);

int main()
{
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    int result = sumOfThree(num1, num2, num3);

    cout << "The sum of " << num1 << ", " << num2 << ", and " << num3 << " is " << result << "." << endl;

    return 0;
}

int sumOfThree(int a, int b, int c)
{
    return a + b + c;
}

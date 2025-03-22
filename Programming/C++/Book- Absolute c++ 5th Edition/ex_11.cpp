/*Write a function definition for a function called inOrder that takes three
arguments of type int . The function returns true if the three arguments are in
ascending order; otherwise, it returns false . For example, inOrder(1, 2, 3) and
inOrder(1, 2, 2) both return true , whereas inOrder(1, 3, 2) returns false .*/

#include <iostream>
using namespace std;
int is_Ascending(int a, int b, int c)
{
    if (a < b && b < c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    if (is_Ascending(num1, num2, num3))
    {
        cout << "The numbers are in ascending order." << endl;
    }
    else
    {
        cout << "The numbers are not in ascending order." << endl;
    }

    return 0;
}
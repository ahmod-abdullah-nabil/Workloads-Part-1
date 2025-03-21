/*Write a C++ function int daySum(int year, int month=1, int day=1) with default parameters to print the sum of days according to the date provided in the parameter list. Test this function in the main function.*/

#include <iostream>
using namespace std;

int daySum(int year, int month = 1, int day = 1)
{
    return year + month + day;
}

int main()
{
    cout << "Sum of days (2023, 10, 5): " << daySum(2023, 10, 5) << endl;
    cout << "Sum of days (2023, 10): " << daySum(2023, 10) << endl;
    cout << "Sum of days (2023): " << daySum(2023) << endl;
    return 0;
}
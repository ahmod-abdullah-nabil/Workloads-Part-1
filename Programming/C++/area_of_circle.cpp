#include <iostream>
#include <cmath>
using namespace std;

double area_of_circle(double r); // declaration of the function

int main()
{
    int a;
    cout << "Enter the radius of the circle: ";
    cin >> a;

    cout << "The area of the circle is: " << area_of_circle(a) << endl; // calling the function
    return 0;
}

double area_of_circle(double r) // definition of the function
{
    const double pi = 3.1416;
    double Area = pi * pow(r, 2);
    return Area;
}

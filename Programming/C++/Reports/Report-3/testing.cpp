#include <iostream>
#include <cmath>
using namespace std;

double getArea(double side, bool isSquare)
{
    return side * side;
}
double getArea(double radius, bool isCircle)
{
    return M_PI * radius * radius;
}
double getArea(double base, double height, bool isTriangle)
{
    return 0.5 * base * height;
}

double getArea(double length, double width, bool isCircle)
{
    return width * length;
}
int main()
{
    int choice;
    cout << "Select the shape to calculate the area:" << endl;
    cout << "1. Square" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Rectangle" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        double side;
        cout << "Enter the side length of the square: ";
        cin >> side;
        cout << "Area of square with side " << side << " is " << getArea(side, true) << endl;
        break;
    }
    case 2:
    {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "Area of circle with radius " << radius << " is " << getArea(radius, true) << endl;
        break;
    }
/*Write a C++ function getArea to calculate the area of a given shape. Note that the shape could be a square, circle, triangle and rectangle. Using the overloading mechanism and test all the overloaded getArea functions in the main function.*/
#include <iostream>
#include <cmath> // For mathematical functions
using namespace std;

// Define PI manually if M_PI is not available
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double getArea(double side, bool isSquare)
{
    return side * side;
}

double getArea(double radius, bool isCircle)
{
    return M_PI * radius * radius;
}

double getArea(double base, double height, bool triangle)
{
    return 0.5 * base * height
}

double getArea(double length, double width, bool isRectangle)
{
    return length * width;
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
        cout << "Area of square with side " << side << " is " << getArea(side) << endl;
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
    case 3:
    {
        double base, height;
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        cout << "Area of triangle with base " << base << " and height " << height << " is " << getArea(base, height) << endl;
        break;
    }
    case 4:
    {
        double length, width;
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        cout << "Area of rectangle with length " << length << " and width " << width << " is " << getArea(length, width, true) << endl;
        break;
    }
    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}
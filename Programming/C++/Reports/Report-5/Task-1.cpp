/*
1. Design a class named Rectangle to represent rectangles. This class should include the following:
Member Variables: length and width
Constructors: A default constructor that initializes both the length and width of the rectangle to 1.0. A parameterized constructor that allows the user to specify the length and width of the rectangle.
Member Functions: getArea(), getPerimeter() and displayInfo()
In the main function, create two Rectangle objects: one using the default constructor and the other using the parameterized constructor (passing in valid length and width values). Then, call the displayInfo() function of these two objects respectively to display their information.
*/

#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle() : length(1.0), width(1.0) {}

    Rectangle(double l, double w) : length(l), width(w) {}

    double getArea() const
    {
        return length * width;
    }

    double getPerimeter() const
    {
        return 2 * (length + width);
    }

    void displayInfo() const
    {
        cout << "Rectangle Information:" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
        cout << "-------------------------" << endl;
    }
};

int main()
{
    Rectangle rect1;
    cout << "Rectangle 1 (Default Constructor):" << endl;
    rect1.displayInfo();

    Rectangle rect2(5.0, 3.0);
    cout << "Rectangle 2 (Parameterized Constructor):" << endl;
    rect2.displayInfo();

    return 0;
}
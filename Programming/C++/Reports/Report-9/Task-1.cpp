/*
Design a shape class hierarchy that meets the following requirements:
1)Base Class Shape:
Protected member variable color (with the type of string).
Constructor to initialize color.
Method getColor() that returns the color.
Method getArea() that returns the area of the shape (default value is 0).
2)Derived Class Rectangle (inherits from Shape):
Private member variables width and height (double type).
Constructor to initialize the base class member and width, height.
Method getArea() that calculates and returns the area of the rectangle.
3)Derived Class Circle (inherits from Shape):
Private member variable radius (double type).
Constructor to initialize the base class member and radius.
Method getArea() that calculates and returns the area of the circle (use π = 3.14159).
Write a function printInfo(Shape& shape) that prints the color and area of the shape. In the main function, create a Rectangle object and a Circle object with arguments, and then call the printInfo function for each.
*/
#include <iostream>
#include <string>
#include <cmath>

class Shape
{
protected:
    std::string color;

public:
    Shape(const std::string &color) : color(color) {}
    std::string getColor() const { return color; }
    virtual double getArea() const { return 0; }
    virtual ~Shape() = default;
};

class Rectangle : public Shape
{
private:
    double width, height;

public:
    Rectangle(const std::string &color, double width, double height)
        : Shape(color), width(width), height(height) {}
    double getArea() const override { return width * height; }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(const std::string &color, double radius)
        : Shape(color), radius(radius) {}
    double getArea() const override { return 3.14159 * radius * radius; }
};

void printInfo(Shape &shape)
{
    std::cout << "Color: " << shape.getColor() << ", Area: " << shape.getArea() << std::endl;
}

int main()
{
    std::string color;
    double width, height, radius;

    std::cout << "Enter the color of the rectangle: ";
    std::cin >> color;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    std::cout << "Enter the height of the rectangle: ";
    std::cin >> height;
    Rectangle rect(color, width, height);

    std::cout << "Enter the color of the circle: ";
    std::cin >> color;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    Circle circ(color, radius);

    std::cout << "\n============ Information of the Rectangle ============" << std::endl;
    printInfo(rect);

    std::cout << "\n============ Information of the Circle ============" << std::endl;
    printInfo(circ);

    return 0;
}
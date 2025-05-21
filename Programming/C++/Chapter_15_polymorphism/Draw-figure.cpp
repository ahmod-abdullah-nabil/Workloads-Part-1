#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a generic Shape." << endl;
    }
};

class Line : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a line." << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a circle." << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a rectangle." << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a triangle." << endl;
    }
};

int main()
{
    Shape *fig;
    Line l;
    Circle c;
    Rectangle r;
    Triangle t;

    fig = &l;
    fig->draw();
    fig = &c;
    fig->draw();

    fig = &r;
    fig->draw();

    fig = &t;
    fig->draw();
    return 0;
}

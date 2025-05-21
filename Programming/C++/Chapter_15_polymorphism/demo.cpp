#include <iostream>
using namespace std;

class shape
{
public:
    virtual void draw()
    {
        cout << "Drawing a generic shape." << endl;
    }
};

class circle : public shape
{
public:
    void draw()
    {
        cout << "Drawing a circle." << endl;
    }
};

int main()
{
    shape *fig;
    line l;
    circle c;

    fig = &l;
    fig->draw(); // Output: Drawing a line.

    fig = &c;
    fig->draw(); // Output: Drawing a circle.

    return 0;
}
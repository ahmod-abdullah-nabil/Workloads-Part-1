/*
2. Design a two-dimensional vector class Dot that contains two private member variables x and y. The following functionalities are required to be implemented:
Overload the - operator to perform subtraction between two two-dimensional vectors.
Overload the * operator to perform multiplication between a vector and a scalar.
Design a friend function dotProduct to calculate the dot product of two two-dimensional vectors.
*/

#include <iostream>
using namespace std;

class Dot
{
private:
    double x;
    double y;

public:
    Dot(double xVal = 0, double yVal = 0) : x(xVal), y(yVal) {}

    Dot operator-(const Dot &other) const
    {
        return Dot(x - other.x, y - other.y);
    }

    Dot operator*(double scalar) const
    {
        return Dot(x * scalar, y * scalar);
    }

    friend double dotProduct(const Dot &d1, const Dot &d2);

    friend ostream &operator<<(ostream &os, const Dot &d)
    {
        os << "(" << d.x << ", " << d.y << ")";
        return os;
    }
};

double dotProduct(const Dot &d1, const Dot &d2)
{
    return d1.x * d2.x + d1.y * d2.y;
}

int main()
{
    Dot d1(3, 4);
    Dot d2(1, 2);

    Dot difference = d1 - d2;
    cout << "Difference: " << difference << endl;

    Dot scaled = d1 * 2.5;
    cout << "Scaled: " << scaled << endl;

    double product = dotProduct(d1, d2);
    cout << "Dot Product: " << product << endl;

    return 0;
}
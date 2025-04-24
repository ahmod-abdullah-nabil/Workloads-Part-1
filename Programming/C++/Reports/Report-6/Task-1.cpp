/*
1. Design a complex number class Complex that contains two private member variables, the real part and the imaginary part. The following functions are required to be implemented:
Overload the + operator to implement the addition of two complex numbers.
Overload the << operator to output the information of a complex number.
Design a friend function multiply to calculate the product of two complex numbers.
*/

#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    friend Complex multiply(const Complex &c1, const Complex &c2);

    friend ostream &operator<<(ostream &os, const Complex &c)
    {
        os << c.real << " + " << c.imag << "i";
        return os;
    }
};

Complex multiply(const Complex &c1, const Complex &c2)
{
    double realPart = c1.real * c2.real - c1.imag * c2.imag;
    double imagPart = c1.real * c2.imag + c1.imag * c2.real;
    return Complex(realPart, imagPart);
}

int main()
{
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex sum = c1 + c2;
    cout << "Sum: " << sum << endl;

    Complex product = multiply(c1, c2);
    cout << "Product: " << product << endl;

    return 0;
}
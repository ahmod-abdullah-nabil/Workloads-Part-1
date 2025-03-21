#include <iostream>
using namespace std;
void fun(int &x, int y, int &z)
{
    x += 10; // Modify x (passed by reference)
    y += 10; // Modify y (passed by value)
    z += 10; // Modify z (passed by reference)
}

int main()
{
    int a = 1, b = 2, c = 3;

    cout << "Before calling fun: " << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    fun(a, b, c);

    cout << "After calling fun: " << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}

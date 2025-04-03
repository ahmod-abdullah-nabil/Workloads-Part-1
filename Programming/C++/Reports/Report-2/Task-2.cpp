/*
    write a c++ program to calculate the sum of the first 1000 terms
    using loop statements:

    s =  2/1 - 3/2 + 5/3 - 8/5 + ...... - ......*/
#include <iostream>
using namespace std;

int main()
{
    int n = 1000;
    int a = 2, b = 1;
    int sign = 1;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += sign * static_cast<double>(a) / b;
        int temp = a;
        a = a + b;
        b = temp;
        sign = -sign;
    }
    cout << "..... " << sum << endl;
    return 0;
}
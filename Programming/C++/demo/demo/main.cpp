#include <iostream>

using namespace std;

int main() 
{
	double a, b, c, sum, area;

	cout << "Enter the sides of the triangle: ";

	cin >> a >> b >> c;


	if (a + b > c && b + c > a && a + c > b)
	{
		sum = a + b + c;
		cout << "The perimeter of the triangle is: " << sum << endl;
		double s = sum / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		cout << "The area of the triangle is: " << area << endl;
	}
	else
	{
		cout << "The sides do not form a triangle." << endl;
	}
}

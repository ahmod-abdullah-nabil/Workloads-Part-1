
// Calculate the area of a triangle with the edges a, b, c//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    float a, b, c, s, area;

    cout << "Input the length of a of the triangle:";
    cin >> a;

    cout << "Input the length of b of the triangle:";
    cin >> b;

    cout << "Input the length of c of the triangle:";
    cin >> c;

    // Or we could also use the code input together as follows:
    // cout << "Input the length of a, b, c of the triangle:";
    // cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "The area of the triangle is: " << area << endl;
    }
    else
    {
        cout << "The given lengths do not form a valid triangle." << endl;
    }

    return 0;
}

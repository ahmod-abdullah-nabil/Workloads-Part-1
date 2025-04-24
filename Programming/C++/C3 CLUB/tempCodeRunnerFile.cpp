#include <iostream>
using namespace std;

int main()
{
    int price = 1000;
    int year = 2025;
    while (price <= 1500)
    {
        cout << "Year: " << year << ", Price: " << price << endl;
        price += 100;
        year++;
    }
    cout << "Too expensive! Get out of the market." << endl;
    return 0;
}

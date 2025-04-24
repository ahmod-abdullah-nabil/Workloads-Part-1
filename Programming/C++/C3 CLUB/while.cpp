// create a whole loop that a scooter price in 1000 in year 2025 and every year it increases by 100 RMB. When the price in more than 1500 it will stop and print the year and the price and say too expensive get out of the market.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int price = 1000;
//     int year = 2025;
//     while (price <= 1500)
//     {
//         cout << "Year: " << year << ", Price: " << price << endl;
//         price += 100;
//         year++;
//     }
//     cout << "Too expensive! Get out of the market." << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    bool isScooter = true;
    int price = 1000;
    int year = 2025;
    while (isScooter)
    {
        cout << "Year: " << year << ", Price: " << price << endl;
        price += 100;
        year++;
        if (price > 1500)
        {
            isScooter = false;
            cout << "Too expensive! Get out of the market." << endl;
        }
    }
    return 0;
}
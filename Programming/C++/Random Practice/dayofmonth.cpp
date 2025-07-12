#include <iostream>
using namespace std;
class DayOfYear
{
public:
    DayOfYear(int monthValue, int dayValue);
    DayOfYear();

private:
    int month;
    int day;
};
int main()
{
    DayOfYear date1(1, 30), date2;
    date2 = DayOfYear();
    return 0;
}
DayOfYear::DayOfYear(int monthValue, int dayValue) : month(monthValue), day(dayValue)
{
}
DayOfYear::DayOfYear() : month(1), day(1)
{
}

// This is a basic program to “Input a user’s first name, last name, and age, and output the whole information.”

#include <iostream>
using namespace std;

int main()
{
    string first_name, last_name;
    int age;

    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    cout << "Enter your age: ";
    cin >> age;

    // We can also take input like this:
    /*
    cout << "Enter your first name, last name & age:";
    cin >> first_name >> last_name >> age;
    */
    cout << "your name is " << first_name << " " << last_name << " " << "and your age is: " << age << endl;
}
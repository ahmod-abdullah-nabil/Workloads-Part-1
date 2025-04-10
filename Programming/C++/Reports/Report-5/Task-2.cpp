/*
Design a Student class that should include the ID (int type), gender (represented by "M" for male and "F" for female), birthday (you need define Date first), and C++ grade (double type). Define the constructors of this Student class (one with no parameters and one with parameters), and define an output function to display the student's information.
In the main function, define three students and display the information of the student with the highest C++ grade.
*/

#include <iostream>
#include <string>
using namespace std;

// Date class definition
class Date
{
private:
    int day, month, year;

public:
    Date() : day(1), month(1), year(2000) {}

    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    string toString() const
    {
        return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    }
};

class Student
{
private:
    int id;
    char gender;
    Date birthday;
    double cppGrade;

public:
    Student() : id(0), gender('M'), birthday(), cppGrade(0.0) {}

    Student(int i, char g, Date b, double grade) : id(i), gender(g), birthday(b), cppGrade(grade) {}

    double getCppGrade() const
    {
        return cppGrade;
    }

    void displayInfo() const
    {
        cout << "Student ID: " << id << endl;
        cout << "Gender: " << gender << endl;
        cout << "Birthday: " << birthday.toString() << endl;
        cout << "C++ Grade: " << cppGrade << endl;
        cout << "-------------------------" << endl;
    }
};

int main()
{
    Student student1(1, 'M', Date(15, 5, 2002), 85.5);
    Student student2(2, 'F', Date(20, 8, 2001), 92.0);
    Student student3(3, 'M', Date(10, 12, 2003), 78.0);

    cout << "Student 1:" << endl;
    student1.displayInfo();

    cout << "Student 2:" << endl;
    student2.displayInfo();

    cout << "Student 3:" << endl;
    student3.displayInfo();

    Student highestGradeStudent = student1;
    if (student2.getCppGrade() > highestGradeStudent.getCppGrade())
    {
        highestGradeStudent = student2;
    }
    if (student3.getCppGrade() > highestGradeStudent.getCppGrade())
    {
        highestGradeStudent = student3;
    }

    cout << "Student with the highest C++ grade:" << endl;
    highestGradeStudent.displayInfo();

    return 0;
}
/*
Design a student information management program with the following requirements:
Requirements:
I.	Create an abstract base class Student containing:
a.	Protected members: string name, int ID.
b.	A pure virtual function void displayInfo(): to show student information.
II.	Create two derived classes:
(1) Undergraduate (undergraduate student):
a.	Add an attribute: double GPA.
b.	(2) Graduate (graduate student):
c.	Add an attribute: string supervisor.
III.	In the main() function: Create student objects of different types and display all students' information.
*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name;
    int ID;

public:
    Student(const string &name, int ID) : name(name), ID(ID) {}

    virtual void displayInfo() const = 0;

    virtual ~Student() {}
};

class Undergraduate : public Student
{
private:
    double GPA;

public:
    Undergraduate(const string &name, int ID, double GPA) : Student(name, ID), GPA(GPA) {}

    void displayInfo() const override
    {
        cout << "--- Undergraduate Student Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "GPA: " << GPA << endl;
        cout << endl;
    }
};

class Graduate : public Student
{
private:
    string supervisor;

public:
    Graduate(const string &name, int ID, const string &supervisor)
        : Student(name, ID), supervisor(supervisor) {}

    void displayInfo() const override
    {
        cout << "--- Graduate Student Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "Supervisor: " << supervisor << endl;
        cout << endl;
    }
};

int main()
{
    Undergraduate undergrad1("John Smith", 12345, 3.75);
    Undergraduate undergrad2("Emily Johnson", 23456, 3.92);
    Graduate grad1("Michael Brown", 34567, "Dr. Peterson");
    Graduate grad2("Sarah Williams", 45678, "Dr. Thompson");

    cout << "Student Information Management System" << endl;
    cout << "====================================" << endl;

    undergrad1.displayInfo();
    undergrad2.displayInfo();
    grad1.displayInfo();
    grad2.displayInfo();

    return 0;
}

#include <iostream>

class Smart
{
protected:
    int a, b;

public:
    void setValues(int x, int y)
    {
        a = x;
        b = y;
    }

    void printAnswer() const
    {
        std::cout << "Base class Smart: a = " << a << ", b = " << b << std::endl;
    }
};

class SmartBut : public Smart
{
private:
    bool crazy;

public:
    SmartBut() : Smart(), crazy(false) {}
    SmartBut(int x, int y, bool c) : Smart(), crazy(c)
    {
        a = x;
        b = y;
    } // Parameterized constructor

    bool isCrazy() const
    {
        return crazy;
    }

    void printAnswer() const
    {
        std::cout << "Derived class SmartBut: a + b = " << (a + b) << std::endl;
        std::cout << "Is crazy? " << (crazy ? "Yes" : "No") << std::endl;
    }
};

int main()
{
    SmartBut obj(5, 10, true);
    obj.printAnswer();

    return 0;
}
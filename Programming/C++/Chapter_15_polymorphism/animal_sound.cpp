#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
        virtual void animalSound()
    {
        cout << "The animal makes a sound \n";
    }
};

class Pig : public Animal
{
public:
    void animalSound() override
    {
        cout << "The pig says: wee wee \n";
    }
};
class Cat : public Animal
{
public:
    void animalSound() override
    {
        cout << "The cat says: meow \n";
    }
};

class Dog : public Animal
{
public:
    void animalSound() override
    {
        cout << "The dog says: bow wow \n";
    }
};

int main()
{
    Animal *animalPtr;
    Pig myPig;
    Dog myDog;
    Cat myCat;

    animalPtr = &myPig;
    animalPtr->animalSound();

    animalPtr = &myDog;
    animalPtr->animalSound();

    animalPtr = &myCat;
    animalPtr->animalSound();
    return 0;
}

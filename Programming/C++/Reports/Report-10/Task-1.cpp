/*
Design an Animal Sound Simulator
Requirements:
1.	Create a base class Animal with a pure virtual function makeSound().
2.	Derive three subclasses Dog, Cat, and Bird, each implementing the makeSound() function to output different sounds (e.g., "Woof", "Meow", "Chirp").
3.	Write a main() function that creates an array of base class pointers, each pointing to objects of the three subclasses. Iterate through the array and call the makeSound() function for each object.
*/

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound() const = 0;
    virtual ~Animal() {}
};

class Dog : public Animal
{
public:
    void makeSound() const override
    {
        cout << "Dog makes sounds like: Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() const override
    {
        cout << "Cat makes sounds like: Meow!" << endl;
    }
};

class Bird : public Animal
{
public:
    void makeSound() const override
    {
        cout << "Bird makes sounds like: Chirp!" << endl;
    }
};

int main()
{
    Animal *animals[3];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Bird();

    cout << "Animal Sound Simulator:" << endl;
    cout << "---------------------" << endl;
    for (int i = 0; i < 3; i++)
    {
        animals[i]->makeSound();
    }

    for (int i = 0; i < 3; i++)
    {
        delete animals[i];
    }

    return 0;
}

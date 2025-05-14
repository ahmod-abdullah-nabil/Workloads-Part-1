/*
Design an animal classification system that meets the following requirements:
1)	Base Class Animal:
Protected member variables:
age (integer) - The age of the animal
Constructor: Initializes the age
Methods:
getAge() - Returns the age
describe() – print the information
2)	Derived Class Mammal (inherits from Animal):
New protected member variable:
furColor (string) - The color of the fur
Constructor: Initializes the base class members and the new member
Methods:
getFurColor() - Returns the color of the fur
describe() - Returns the descriptive information including the age, and fur color
3)	Derived Class Dog (inherits from Mammal):
New private member variable:
breed (string) - The breed of the dog
Constructor: Initializes the base class members and the new member
Methods:
getBreed() - Returns the breed
describe() - Returns the descriptive information including the age, fur color, and breed
bark() - Returns the string "Woof!"

Create a Dog object, call the methods of describe() and bark(), and print the results.
*/

#include <iostream>
#include <string>

class Animal
{
protected:
    int age;

public:
    Animal(int age) : age(age) {}
    int getAge() const { return age; }
    virtual std::string describe() const { return "Age: " + std::to_string(age); }
    virtual ~Animal() = default;
};

class Mammal : public Animal
{
protected:
    std::string furColor;

public:
    Mammal(int age, const std::string &furColor) : Animal(age), furColor(furColor) {}
    std::string getFurColor() const { return furColor; }
    std::string describe() const override { return Animal::describe() + ", Fur Color: " + furColor; }
};

class Dog : public Mammal
{
private:
    std::string breed;

public:
    Dog(int age, const std::string &furColor, const std::string &breed)
        : Mammal(age, furColor), breed(breed) {}
    std::string getBreed() const { return breed; }
    std::string describe() const override { return Mammal::describe() + ", Breed: " + breed; }
    std::string bark() const { return "Woof!"; }
};

int main()
{
    int age;
    std::string furColor, breed;

    std::cout << "Enter the age of the dog: ";
    std::cin >> age;
    std::cin.ignore();

    std::cout << "Enter the fur color of the dog: ";
    std::getline(std::cin, furColor);

    std::cout << "Enter the breed of the dog: ";
    std::getline(std::cin, breed);

    std::cout << "\n============ Information of the Dog ============" << std::endl;
    Dog dog(age, furColor, breed);
    std::cout << dog.describe() << std::endl;
    std::cout << dog.bark() << std::endl;

    return 0;
}
//Program name-Write a java program using hierarchinal inheritance.
// Superclass
class Animal {
    public void eat() {
        System.out.println("Animal is eating...");
    }
}

// First subclass
class Dog extends Animal {
    public void bark() {
        System.out.println("Dog is barking...");
    }
}

// Second subclass
class Cat extends Animal {
    public void meow() {
        System.out.println("Cat is meowing...");
    }
}

// Main class
public class Main {
    public static void main(String[] args) {
        Dog dog = new Dog();
        Cat cat = new Cat();

        // Calling methods from the superclass and subclasses
        dog.eat(); // Output: Animal is eating...
        dog.bark(); // Output: Dog is barking...

        cat.eat(); // Output: Animal is eating...
        cat.meow(); // Output: Cat is meowing...
    }
}

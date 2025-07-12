//Program Name- Write a java program using Abstract class.
// Abstract class
abstract class Animal {
    // Abstract method
    public abstract void sound();

    // Regular method
    public void sleep() {
        System.out.println("Zzz...");
    }
}

// Concrete class 1
class Dog extends Animal {
    public void sound() {
        System.out.println("Woof!");
    }
}

// Concrete class 2
class Cat extends Animal {
    public void sound() {
        System.out.println("Meow!");
    }
}

public class Main {
    public static void main(String[] args) {
        // Create objects of concrete classes
        Dog dog = new Dog();
        Cat cat = new Cat();

        // Call the abstract method on objects
        dog.sound(); // Output: Woof!
        cat.sound(); // Output: Meow!

        // Call the regular method on objects
        dog.sleep(); // Output: Zzz...
        cat.sleep(); // Output: Zzz...
    }
}

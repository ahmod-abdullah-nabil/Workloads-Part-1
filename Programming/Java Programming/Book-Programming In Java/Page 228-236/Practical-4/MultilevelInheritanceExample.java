//Program Name- Write a java program using multilevel inheritance.
class Animal {
    public void eat() {
        System.out.println("Animal is eating");
    }
}

class Dog extends Animal {
    public void bark() {
        System.out.println("Dog is barking");
    }
}

class Labrador extends Dog {
    public void displayColor() {
        System.out.println("Labrador color is yellow");
    }
}

public class MultilevelInheritanceExample {
    public static void main(String[] args) {
        Labrador labrador = new Labrador();
        labrador.eat();
        labrador.bark();
        labrador.displayColor();
    }
}

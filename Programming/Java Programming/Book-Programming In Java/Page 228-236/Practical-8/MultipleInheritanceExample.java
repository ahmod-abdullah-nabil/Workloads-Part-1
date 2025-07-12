//Prrogram Name- Multiple inheritance.
// Interface for the first parent class
interface Parent1 {
    void methodFromParent1();
}

// Interface for the second parent class
interface Parent2 {
    void methodFromParent2();
}

// Concrete class that implements both interfaces
class Child implements Parent1, Parent2 {
    @Override
    public void methodFromParent1() {
        System.out.println("Method from Parent1");
    }

    @Override
    public void methodFromParent2() {
        System.out.println("Method from Parent2");
    }
}

public class MultipleInheritanceExample {
    public static void main(String[] args) {
        Child child = new Child();
        child.methodFromParent1();
        child.methodFromParent2();
    }
}

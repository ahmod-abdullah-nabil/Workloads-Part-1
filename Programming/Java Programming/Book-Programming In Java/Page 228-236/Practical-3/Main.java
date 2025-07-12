//Program Name- Write a java program using copy constructor.
class Person {
    private String name;
    private int age;

    // Default constructor
    public Person() {
        this.name = "Unknown";
        this.age = 0;
    }

    // Copy constructor
    public Person(Person anotherPerson) {
        this.name = anotherPerson.name;
        this.age = anotherPerson.age;
    }

    // Setter methods
    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    // Getter methods
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }
}

public class Main {
    public static void main(String[] args) {
        // Create a person object using default constructor
        Person person1 = new Person();
        person1.setName("John");
        person1.setAge(25);

        // Create a new person object using copy constructor
        Person person2 = new Person(person1);

        // Display details of person1
        System.out.println("Details of person1:");
        System.out.println("Name: " + person1.getName());
        System.out.println("Age: " + person1.getAge());

        System.out.println();

        // Display details of person2
        System.out.println("Details of person2 (copied from person1):");
        System.out.println("Name: " + person2.getName());
        System.out.println("Age: " + person2.getAge());
    }
}

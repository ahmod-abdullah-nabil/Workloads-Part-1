class Employee {
    float salary = 40000;
}

class Programmer extends Employee {
    float bonus = 10000;
}

public class TestInheritance {
    public static void main(String[] args) {
        Programmer p = new Programmer();
        System.out.println("Programmer salary is: " + p.salary);
        System.out.println("Programmer bonus is: " + p.bonus);
    }
}

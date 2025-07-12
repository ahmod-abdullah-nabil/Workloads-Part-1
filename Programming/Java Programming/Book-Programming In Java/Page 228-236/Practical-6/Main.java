//Program Name- Write a java program using Overridden Method.
class Vehicle {
    public void move() {
        System.out.println("Vehicle is moving...");
    }
}

class Car extends Vehicle {
    @Override
    public void move() {
        System.out.println("Car is moving...");
    }
}

class Motorcycle extends Vehicle {
    @Override
    public void move() {
        System.out.println("Motorcycle is moving...");
    }
}

public class Main {
    public static void main(String[] args) {
        Vehicle vehicle = new Vehicle();
        Car car = new Car();
        Motorcycle motorcycle = new Motorcycle();

        vehicle.move(); // Output: Vehicle is moving...
        car.move(); // Output: Car is moving...
        motorcycle.move(); // Output: Motorcycle is moving...
    }
}

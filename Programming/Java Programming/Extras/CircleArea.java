import java.util.Scanner;

class CircleArea {
    public static void main(String[] args) {
        double r, Area;

        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter the value of r: ");
            r = input.nextInt();
        }
        Area = Math.PI * (r * r);
        System.out.println("The Circle Area is: " + Area);
    }
}
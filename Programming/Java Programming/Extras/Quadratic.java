import java.util.Scanner;

public class Quadratic {
    public static void main(String[] args) {
        double a, b, c, d, x1, x2, x3;
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter a:");
            a = input.nextDouble();
            System.out.print("Enter b:");
            b = input.nextDouble();
            System.out.print("Enter c:");
            c = input.nextDouble();
        }

        d = (b * b - 4 * a * c);

        if (d > 0) {
            x1 = (-b + Math.sqrt(d)) / (2 * a); // Parentheses added for correct order of operations
            x2 = (-b - Math.sqrt(d)) / (2 * a); // Parentheses added for correct order of operations
            System.out.println("x1 = " + x1 + " and x2 = " + x2); // Print the values of x1 and x2

        } else if (d == 0) {
            x3 = -b / (2 * a); // Parentheses added for correct order of operations
            System.out.println("x3 = " + x3); // Print the value of x3
        } else {
            System.out.println("The roots are not real"); // Updated error message
        }
    }
}

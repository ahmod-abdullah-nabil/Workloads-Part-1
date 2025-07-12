
// Program Name- Summation of 2 numbers using break and continue statement.
import java.util.InputMismatchException;
import java.util.Scanner;

public class Summation {
    public static void main(String[] args) {
        // Create a Scanner object to read user input
        Scanner scanner = new Scanner(System.in);

        int startNumber, endNumber;
        try {
            // Prompt the user to enter the first number
            System.out.print("Enter the first number: ");
            startNumber = scanner.nextInt();

            // Prompt the user to enter the second number
            System.out.print("Enter the second number: ");
            endNumber = scanner.nextInt();

            if (endNumber < startNumber) {
                System.out.println("Error: Second number should be greater than or equal to the first number.");
                scanner.close();
                return;
            }
        } catch (InputMismatchException e) {
            System.out.println("Error: Invalid input. Please enter integers only.");
            scanner.close();
            return;
        }

        // Initialize the sum variable
        int sum = 0;

        // Perform the summation using a for loop
        for (int i = startNumber; i <= endNumber; i++) {
            // Use the continue statement to skip negative numbers
            if (i < 0) {
                continue;
            }

            // Use the break statement to exit the loop if the sum exceeds 100
            if (sum + i > 100) {
                break;
            }

            // Print the number being added
            System.out.println("Adding: " + i);

            // Add the current number to the sum
            sum += i;
        }

        // Print the result
        System.out.println("The sum of numbers between " + startNumber + " and " + endNumber + " is: " + sum);

        // Close the Scanner object
        scanner.close();
    }
}

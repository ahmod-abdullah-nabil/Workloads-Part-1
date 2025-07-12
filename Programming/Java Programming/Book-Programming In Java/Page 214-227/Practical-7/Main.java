
// Program Name - Program Using Package.
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // Create a Scanner object to read input from the console
        Scanner scanner = new Scanner(System.in);

        // Prompt the user to enter their name
        System.out.println("What is your name?");

        // Read the user's name
        String name = scanner.nextLine();
        scanner.close();

        // Print a greeting to the user
        System.out.println("Hello, " + name + "!");
    }
}
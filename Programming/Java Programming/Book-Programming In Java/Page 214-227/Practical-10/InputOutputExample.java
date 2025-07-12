//Program Name- java program using i/o operations.

import java.util.Scanner;
import java.io.PrintWriter;
import java.io.FileWriter;
import java.io.IOException;

public class InputOutputExample {
    public static void main(String[] args) {
        // Reading input from the user
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a message: ");
        String userInput = scanner.nextLine();
        
        // Writing input to a file
        try {
            PrintWriter writer = new PrintWriter(new FileWriter("output.txt"));
            writer.println("User input: " + userInput);
            writer.close();
            System.out.println("Data written to output.txt successfully.");
        } catch (IOException e) {
            System.err.println("Error writing to the file: " + e.getMessage());
        }
        
        // Closing the scanner
        scanner.close();
    }
}

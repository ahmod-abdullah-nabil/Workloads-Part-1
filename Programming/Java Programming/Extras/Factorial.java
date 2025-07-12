import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        int i, fact = 1, n;
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter the: n: ");
            n = input.nextInt();
        }
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }
        System.out.println("The factorial is: " + fact);
    }
}
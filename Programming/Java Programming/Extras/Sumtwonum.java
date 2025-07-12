import java.util.Scanner;

public class Sumtwonum {
    public static void main(String[] args) {
        int a, b, sum;
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter the value of a: ");
            a = input.nextInt();

            System.out.print("Enter the value of b: ");
            b = input.nextInt();
        }
        sum = a + b;
        System.out.println("The sum is: " + sum);
    }
}

import java.util.Scanner;

public class ODDEVEN {
    public static void main(String[] args) {
        int n;

        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter a number : ");
            n = input.nextInt();
            if (n % 2 == 0) {
                System.out.println("The num is EVEN");

            } else {
                System.out.println("Tne num is ODD");

            }
        }
    }

}

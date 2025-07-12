import java.util.Scanner;

public class Series {
    public static void main(String[] args) {
        int i, n, sum = 0;
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("|Enter the n: ");
            n = input.nextInt();
        }
        for (i = 1; i <= n; i++) {
            sum = sum + i;
        }
        System.out.println("The sum is : " + sum);
    }

}

import java.util.Scanner;

public class LargestNum {
    public static void main(String[] args) {
        int num1, num2, num3;
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter the first num: ");
            num1 = input.nextInt();

            System.out.print("Enter the Second num: ");
            num2 = input.nextInt();

            System.out.print("Enter the third num: ");
            num3 = input.nextInt();
        }

        if (num1 > num2 && num1 > num3) {
            System.out.println("The largest num is: num1");
        } else if (num2 > num3 && num2 > num1) {
            System.out.println("The largest num is : num2");

        } else {
            System.out.println("The largest num is: num3");
        }

    }

}

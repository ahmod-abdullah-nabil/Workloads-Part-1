import java.util.Scanner;

public class RectangleArea {
    public static void main(String[] args) {
        int a, b, Area;
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter the value of a: ");
            a = input.nextInt();

            System.out.print("Enter the value of b: ");
            b = input.nextInt();
        }
        Area = a * b;
        System.out.println("The Area is: " + Area);
    }

}

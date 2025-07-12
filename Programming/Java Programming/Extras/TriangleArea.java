import java.util.Scanner;

public class TriangleArea {
    public static void main(String[] args) {
        int b, h, Area;
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter the value of b: ");
            b = input.nextInt();
            System.out.print("Enter the value of h: ");
            h = input.nextInt();
        }
        Area = (b * h) / 2;
        System.out.println("The Area is: " + Area);
    }

}

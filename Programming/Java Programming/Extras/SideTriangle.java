import java.util.Scanner;

public class SideTriangle {
    public static void Main(String[] args) {
        double a, b, c, s, Area;
        try (Scanner input = new Scanner(System.in)) {
            System.out.println("Enter value of a: ");
            a = input.nextInt();

            System.out.println("Enter the value of b: ");
            b = input.nextInt();

            System.out.println("Enter the value of c: ");
            c = input.nextInt();
        }
        if (a > 0 && b > 0 && c > 0 && (a + b) > 0 && (a + c) > 0 && (b + c) > 0) {
            s = (a + b + c) / 2;
            Area = Math.sqrt((s - a) * (s - b) * (s - c));
            System.out.println("The Side Triangle Area is : " + Area);
        }
    }

}

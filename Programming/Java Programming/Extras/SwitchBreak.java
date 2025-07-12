import java.util.Scanner;

public class SwitchBreak {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter the marks:");
            int marks = input.nextInt();
            switch (marks / 100) {
                case 100: {
                    System.out.println("You have got Golden A+.");
                    break;
                }
                case 80: {
                    System.out.println("You have got A+.");
                    break;
                }
                case 70: {
                    System.out.println("You have got A.");
                    break;

                }
                case 60: {
                    System.out.println("You have got B+.");
                    break;
                }
                case 50: {
                    System.out.println("You have got B.");
                    break;
                }
                case 40: {
                    System.out.println("You have got B-.");
                    break;
                }
                default: {
                    System.out.println("You have got Failed.");
                    break;

                }
            }
        }

    }
}

public class PrimeNumber {
    public static void main(String[] args) {
        System.out.print("Prime Number from 1 to 100: ");
        for (int i = 2; i <= 100;) {
            int prime = 1;
            for (int loop = 2; loop <= i; loop++) {
                if (i % loop == 0 && loop != i) {
                    prime = 0;
                }
            }
            if (prime != 0) {
                System.out.print(i);
                System.out.print(",");
                i++;
            } else {
                i++;
            }
        }
    }

}

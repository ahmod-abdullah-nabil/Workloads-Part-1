//Problem Name: Calculate sum and average of some arrays using flow control statements. 
public class ArraySumAndAverage {
    public static void main(String[] args) {
        // Sample array
        int[] numbers = { 12, 34, 56, 78, 90 };

        // Initialize variables to store sum and count
        int sumOfNumbers = 0;
        int count = 0;

        // Calculate the sum and count using a loop
        for (int num : numbers) {
            sumOfNumbers += num;
            count++;
        }

        // Calculate the average
        double average = (double) sumOfNumbers / count;

        // Display the results
        System.out.print("Array: ");
        for (int num : numbers) {
            System.out.print(num + " ");
        }
        System.out.println("\nSum: " + sumOfNumbers);
        System.out.println("Average: " + average);
    }
}

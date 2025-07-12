// Program Name - Write a Java program using multithreading.

class MyThreadClass extends Thread {
    private final int id;

    public MyThreadClass(int id) {
        this.id = id;
    }

    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("Thread " + id + ": Count " + i);
            try {
                Thread.sleep(1000); // Sleep for 1 second
            } catch (InterruptedException e) {
                System.err.println("Thread " + id + " interrupted.");
                // Handle the interrupted thread gracefully or record/log the exception.
                // Example: logger.error("Thread " + id + " interrupted.", e);
                Thread.currentThread().interrupt(); // Restore interrupted status
            }
        }
    }
}

public class MultithreadingExample {
    public static void main(String[] args) {
        MyThreadClass thread1 = new MyThreadClass(1);
        MyThreadClass thread2 = new MyThreadClass(2);

        thread1.start();
        thread2.start();
    }
}

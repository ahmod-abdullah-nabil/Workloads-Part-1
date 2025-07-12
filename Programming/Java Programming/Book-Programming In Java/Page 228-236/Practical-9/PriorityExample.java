//Java program using getpiority and setpiority method.
class PriorityThread extends Thread {
    public PriorityThread(String name) {
        super(name);
    }

    @Override
    public void run() {
        System.out.println(getName() + " is running with priority " + getPriority());
    }
}

public class PriorityExample {
    public static void main(String[] args) {
        PriorityThread thread1 = new PriorityThread("Thread 1");
        PriorityThread thread2 = new PriorityThread("Thread 2");
        PriorityThread thread3 = new PriorityThread("Thread 3");

        // Set priorities for threads
        thread1.setPriority(Thread.MIN_PRIORITY); // Priority value: 1
        thread2.setPriority(Thread.NORM_PRIORITY); // Priority value: 5
        thread3.setPriority(Thread.MAX_PRIORITY); // Priority value: 10

        thread1.start();
        thread2.start();
        thread3.start();
    }
}

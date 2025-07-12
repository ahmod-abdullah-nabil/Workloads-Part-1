// Program Name - Program using method overloading.
class MethodOverloading {
    void sum(int a, int b) {
        System.out.println("The sum is: " + (a + b));
    }

    void sum(float a, float b) {
        System.out.println("The sum is: " + (a + b));
    }

    public static void main(String[] args) {
        MethodOverloading cal = new MethodOverloading();
        cal.sum(10, 12);
        cal.sum(8.2f, 5.0f);
    }
}

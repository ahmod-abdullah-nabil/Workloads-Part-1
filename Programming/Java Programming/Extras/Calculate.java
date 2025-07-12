class Calculate {

    public void sum(double d, double e) {
        System.out.println("sum: " + (d + e));
    }

    public void sum(float a, float b) {
        System.out.println("sum: " + (a + b));
    }

    public static void main(String[] args) {
        Calculate cal = new Calculate();
        cal.sum(9.0, 8.0);
        cal.sum(3.4f, 4.6f);
    }

}

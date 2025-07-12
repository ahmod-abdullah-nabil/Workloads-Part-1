//Program Name- Program using Constructor.
class MainClass {
    private int i;

    public MainClass() {
        i = 5;
        System.out.println("Constructor is called");
    }

    public static void main(String[] args) {
        MainClass p = new MainClass();
        System.out.println("The value is: " + p.i);
    }
}

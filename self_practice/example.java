public class example {
    static void check() {
        try {
            throw new ArithmeticException("Demo");
            // int c = 5 / 0;
        } catch (ArithmeticException e) {
            System.out.println("caught in check");
            throw e;
        }
    }

    public static void main(String[] args) {
        try {
            check();
        } catch (ArithmeticException e) {
            System.out.println("caught in main");
        }
    }
}

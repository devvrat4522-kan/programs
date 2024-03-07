public class kismat9 {
    public void method() {
        int a = 5, b = 0;
        try {
            int c = a / b;
            System.out.println(c);
        } catch (ArithmeticException e) {
            System.out.println("ArithmeticException");
        }
    }

    public static void main(String[] args) {
        kismat9 kis = new kismat9();
        kis.method();
    }
}

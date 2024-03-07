public class kismat10 {
    public void method() {
        int a = 5, b = 0;
        int arr[] = new int[5];
        try {
            // arr[7] = 9;
            int c = a / b;
            System.out.println(c);
        } catch (ArithmeticException e) {
            try {
                arr[7] = 10;
            } catch (ArrayIndexOutOfBoundsException e1) {
                System.out.println("ArrayIndexOutOfBoundsException");
            }
            System.out.println("ArithmeticException");
        }
        System.out.println("program continues");
    }

    public static void main(String[] args) {
        kismat10 kis = new kismat10();
        kis.method();
    }
}

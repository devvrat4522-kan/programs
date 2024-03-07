class A {
    public void init() throws Exception {
        int a = 9, b = 0;
        InvalidEntryException e = new InvalidEntryException("Invalid entry");
        e.initCause(new ArithmeticException("cause"));
        throw e;
    }
}

public class kismat22 {
    public static void main(String[] args) {
        A a = new A();
        try {
            a.init();
        } catch (Exception e) {
            System.out.println(e);
            System.out.println("Exception" + e.getCause());
        }
    }
}

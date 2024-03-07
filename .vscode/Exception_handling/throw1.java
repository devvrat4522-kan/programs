public class throw1 {
    static void func() {
        try {
            throw new NullPointerException("demo"); // creating java exception object
        } catch (NullPointerException e) {
            System.out.println("Caught inside func.");
            throw e; // rethrow the exception
        }
    }

    public static void main(String[] args) {
        try {
            func();
        } catch (NullPointerException e) {
            System.out.println("Recaught: " + e);
        }
    }
}

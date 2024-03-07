// When a function may cause error bt it doesnot handle it so it need to specify it so that the caller function can handle it. It is done
// by using throws clause in the methid declaration. 

public class ThrowsDemo {
    static void throwOne() throws IllegalAccessException {
        System.out.println("Inside throwOne.");
        throw new IllegalAccessException("demo");
    }

    public static void main(String args[]) {
        try {
            throwOne();
        } catch (Exception e) {
            System.out.println("Caller of the method : " + e);
        }
    }
}

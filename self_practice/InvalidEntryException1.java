public class InvalidEntryException1 extends RuntimeException {
    String st1;
    private Throwable cause;

    InvalidEntryException1(String st, Throwable cause) {
        super(st);
        this.cause = cause;
    }

    public String getMessage() {
        return super.getMessage() + " caused by : " + cause;
    }

    public String toString() {
        return "InvalidEntryException : ";
    }
}

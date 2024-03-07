public class InvalidEntryException1 extends Exception {
    String st;

    public InvalidEntryException1(String s) {
        this.st = s;
    }
    // public InvalidEntryException(String s) {
    // super(s);
    // }

    public String toString() {
        return "InvalidEntry Exception" + getMessage();
    }

    // public String getMessage() {
    // return "Invalid entry Exception";
    // }

    public static void main(String[] args) {
        try {
            throw new InvalidEntryException1("Entry is invalid");
        } catch (InvalidEntryException1 e) {
            System.out.println(e.getMessage());
            System.out.println(e);
        }
    }
}

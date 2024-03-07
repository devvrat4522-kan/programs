public class InvalidEntryException2 extends Exception {
    String st;

    public InvalidEntryException2(String s) {
        this.st = s;
    }

    public String toString() {
        return "InvalidEntry Exception" + getMessage();
    }
                                                                                                            
    public static void main(String[] args) {
        try {
            throw new InvalidEntryException2("Entry is invalid");
        } catch (InvalidEntryException2 e) {
            System.out.println(e.getMessage());
            System.out.println(e);
        }
    }
}

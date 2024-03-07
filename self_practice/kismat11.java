class InvalidEntryException extends Exception {
    String st1;

    InvalidEntryException(String st) {
        st1 = st;
    }

    public String getMessage() {
        return st1;
    }

    public String toString() {
        return "InvalidEntryException : " + st1;
    }
}

public class kismat11 {
    public static void main(String[] args) {
        int arr[] = new int[5];
        int i = 3;
        try {
            if (i > 2)
                throw new InvalidEntryException("InvalidEntry");
            arr[i] = 90;
        } catch (InvalidEntryException e) {
            System.out.println(e);
            System.out.println(e.getMessage());
        }
        System.out.print("completed " + arr[i]);
    }
}

import java.util.*;

class cal<T extends Number> {
    public void run(T a, T b) {
        char ch;
        System.out.println("Enter the operation ");
        Scanner sc = new Scanner(System.in);
        ch = (char) sc.nextInt();
        if (ch == '+')
            System.out.println("Addition" + a.intValue() + b.intValue());
        else if (ch == '-')
            System.out.println("Addition" + a.valueof() - b.valueOf());
        else if (ch == '*')
            System.out.println("Addition" + b);
    }
}

public class kismat33 {
    public static void main(String[] args) {
        cal<Integer> c = new cal<Integer>();
        c.run(5, 6);
    }
}

import java.util.*;

class fuck {
    public int number;
    public int value;
    public int gen;

    fuck() {
        Random rand = new Random();
        this.value = rand.nextInt(100);
    }

    public void userinput() {
        System.out.println("Enter the number");
        Scanner sc = new Scanner(System.in);
        number = sc.nextInt();
    }

    public boolean check() {
        System.out.println("random number : " + value);
        if (value == number)
            return true;
        else if (value > number)
            System.out.println("too low");
        else if (value < number)
            System.out.println("too high");
        return false;
    }
}

public class quest1 {
    public static void main(String[] args) {
        int f1 = 0;
        while (f1 == 0) {
            fuck f = new fuck();
            f.userinput();
            System.out.println(f.check());
            if (f.check() == true)
                f1 = 1;
        }
    }
}

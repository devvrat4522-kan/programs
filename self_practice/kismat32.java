
// General Generic class Program

import java.util.*;

class A<T1 extends Number> {
    T1 a;

    public void in(T1 x) {
        a = x;
    }

    double reciprocal() {
        return 1 / a.doubleValue();
    }

    void show() {
        System.out.println("Type of T = " + a.getClass().getName());
    }

}

public class kismat32 {
    public static void main(String[] args) {
        A<Integer> a = new A<Integer>();
        a.in(5);
        System.out.println(a.reciprocal());
        a.show();
    }
}

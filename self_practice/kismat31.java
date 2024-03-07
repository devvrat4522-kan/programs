
// General Generic class Program

import java.util.*;

class A<T1, T2> {
    T1 a;
    T2 a1;

    public void in(T1 x, T2 y) {
        a = x;
        a1 = y;
    }

    T1 out() {
        return a;
    }

    T2 out1() {
        return a1;
    }

    void show() {
        System.out.println("Type of T = " + a.getClass().getName());
    }

    void show1() {
        System.out.println("Type of T = " + a1.getClass().getName());
    }
}

public class kismat31 {
    public static void main(String[] args) {
        A<Integer, String> a = new A<Integer, String>();
        a.in(5, "devvrat");
        System.out.println(a.out());
        a.show();
        // System.out.println("");
        // A<String> a1 = new A<String>();
        // a1.in("Devvrat");
        // System.out.println(a1.out());
        // a1.show();
    }
}

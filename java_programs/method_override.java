class A {
    public void m1() {
        System.out.println("A's m1");
    }
}

class B extends A {
    public void m1() {
        System.out.println("B's m2");
    }
}

public class method_override {
    public static void main(String[] args) {
        B b = new B();
        b.m1();
        A a = new A();
        a.m1();
    }
}

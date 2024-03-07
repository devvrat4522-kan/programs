class super1 {
    public void print() {
        System.out.println("super method ");
    }

    public void m1() {
        System.out.println("super m1");
    }
}

class sub extends super1 {
    public void print() {
        System.out.println("sub class print");
    }

    public void m2() {
        System.out.println("sub class m2");
    }
}

// super class object can be refrenced to sub class object
public class dynamic_method_dispatch {
    public static void main(String[] args) {
        // sub sb = new super1(); // not allowed
        super1 sp = new sub();
        sp.print();
        sp.m1();
    }
}

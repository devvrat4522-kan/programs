class A {
    int a1 = 4;
    private int b1 = 5;
    protected int c1 = 7;
    public int d1 = 9;

    public class B {
        int a2 = 4;
        private int b2 = 5;
        protected int c2 = 7;
        public int d2 = 9;

        void print1() {
            System.out.println("a : " + a1 + " b : " + b1 + " c : " + c1 + " d : " + d1);
        }
    }

    B b = new B();

    void print2() {
        System.out.println("a2 : " + b.a2 + " b2 : " + b.b2 + " c2 : " + b.c2);
    }
    // void print(){
    // System.out.println("a: " + a);
    // }

}

public class kismat14 {
    public static void main(String[] args) {
        A a = new A();
        A.B b = a.new B();
        // System.out.println("a: " + b.d1);
        b.print1();
        a.print2();
    }
}

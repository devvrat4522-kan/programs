public class A {
    private int a;
    protected int b;
    public int c;
    int d;

    A(int a, int b, int c, int d) {
        this.a = a;
        this.b = b;
        this.c = c;
        this.d = d;
    }

    public class B {
        private int a1 = 2;
        protected int b1 = 8;
        public int c1 = 9;
        int d1 = 0;

        B(int a1, int b1, int c1, int d1) {
            this.a1 = a1;
            this.b1 = b1;
            this.c1 = c1;
            this.d1 = d1;
        }

        public void print1() {
            System.out.println("a1 : " + a1 + " b1 : " + b1 + " c1 : " + c1 + " d1 : " + d1);
        }
    }

    // B b1 = new B(5, 6, 7, 8);
    // we can access inner class variable by creating the object of the inner class
    // in outer class
    void print() {
        System.out.println("a : " + a + " b : " + b + " c : " + c + " d : " + d);
        // System.out.println("a1 : " + b1.a1 + " b1 : " + b1.b1 + " c1 : " + b1.c1 + "
        // d1 : " + b1.d1);
    }

}

import package_spont.*;

public class Main {
    public static void main(String[] args) {

        spont a = new spont();
        spont.B b = a.new B();

        // while accessing data members of inner class through the other class Main
        // private member will not be accessed
        // b.a1 not accessible

        // System.out.println("A class a : " + b.a1);
        System.out.println("A class a : " + b.c1);
        // System.out.println("A class a : " + b.d1);
    }
}

interface Ifac1 {
    void im1();

    // private void im();

    default void dm8() {
        System.out.println("Interface iface1 dm1");
    }

    public static Ifac1 getfactory(String type) {
        if (type == "concrete")
            return new concrete();
        else if (type == "concrete2")
            return new concrete2();
        else
            throw new IllegalArgumentException("illigal parameter");
    }
}

interface Ifac2 {
    public void im1();

    public void im2();

    default void dm1() {
        System.out.println("Interface concrete im1");
    };
    }

class concrete implements Ifac1, Ifac2 {
    // public void im1() {
    //     System.out.println("Interface concrete im1");
    // }

    public void im2() {
        System.out.println("Interface concrete im1");
    }
}

class concrete2 implements Ifac1, Ifac2 {
    // public void im1() {
    // System.out.println("Interface concrete2 im1");
    // }

    public void im2() {
        System.out.println("Interface concrete im1");
    }

    
}

public class kismat8 {
    public static void main(String[] args) {
        // concrete it = new concrete();
        // it.im1();
        // it.dm1();
        concrete ct = (concrete) Ifac1.getfactory("concrete");
        ct.im1();
        ct.dm1();
        concrete2 ct1 = (concrete2) Ifac1.getfactory("concrete2");
        ct1.im1();
        ct1.dm1();
    }
}

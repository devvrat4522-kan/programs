class parent {
    parent(int i) {
        System.out.print("parent constructor ");
        System.out.println(i);
    }

    parent() {
        System.out.println("Satic constructor");
    }

    public void proc1() {
        System.out.println("Parent");
    }
}

class child extends parent {
    child(int i) {
        super(i);
        System.out.println("child constructor");
    }

    public child() {
        System.out.println("Satic constructor");
    }

    public void proc1() {
        System.out.println("Child");
    }
}

public class kismat5 {
    public static void main(String[] args) {
        parent pt = new child(4);
        pt.proc1();
    }
}

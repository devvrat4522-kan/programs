class parent {
    parent(int i) {
        System.out.print("parent constructor ");
        System.out.println(i);
    }

    public void proc1() {
        System.out.println("Parent");
    }

    public static parent getfactory(String type, int i) {
        if (type == "child")
            return new child(i);
        else if (type == "child1")
            return new child1(i);
        else
            throw new IllegalArgumentException("Parent class type not valid");
    }
}

class child extends parent {
    child(int i) {
        super(i);
        System.out.print("child constructor");
    }

    public void proc1() {
        System.out.println(" Child");
    }
}

class child1 extends parent {
    child1(int i) {
        super(i);
        System.out.println("Child1");
    }

    public void proc1() {
        System.out.println("Child1");
    }
}

public class kismat6 {
    public static void main(String[] args) {
        // parent pt = new child(4);
        // pt.proc1();
        parent pt = parent.getfactory("child", 5);
        pt.proc1();
        // System.out.println("");

        child1 pt1 = (child1) parent.getfactory("child1", 8);
        pt1.proc1();
    }
}

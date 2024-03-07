abstract class parent {
    parent(int i) {
        System.out.print("parent constructor ");
        System.out.println(i);
    }

    static {
        System.out.println("parent Static constructor");
    }
    {
        System.out.println("Parent Non-Static constructor");
    }

    public abstract void proc1();

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

    static {
        System.out.println("Child Static constructor");
    }
    {
        System.out.println("Child Non-Static constructor");
    }

    public void proc1(String st) {
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

public class kismat7 {
    public static void main(String[] args) {
        // parent pt = new child(6);
        parent p1 = parent.getfactory("child", 99);
        p1.proc1();
        child ch = new child(5);
        ch.proc1();
        child1 ch1 = new child1(9);
        ch1.proc1();
    }
}

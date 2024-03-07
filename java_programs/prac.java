class base {
    public int x;

    void setX(int x) {
        this.x = x;
        System.out.println("base X " + x);
    }
}

class derived extends base {
    public int y;

    void setY(int y) {
        this.y = y;
        System.out.println("derived y " + y);

    }
}

public class prac {
    public static void main(String[] args) {
        derived d = new derived();
        d.setX(6);
        d.setY(7);
    }
}
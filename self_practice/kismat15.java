class one extends Thread {
    public void run() {
        int i = 0;
        while (i < 40) {
            System.out.println("one thread started");
            i++;
            // sleep(100);
        }
    }
}

class two extends Thread {
    public void run() {
        int i = 0;
        while (i < 40) {
            System.out.println("two thread started");
            i++;
        }
    }
}

public class kismat15 {
    public static void main(String[] args) {
        one th = new one();
        two tw = new two();
        th.start();
        // System.out.println(th.getName());
        tw.start();
    }
}

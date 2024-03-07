class Thread1 extends Thread {
    public void run() {
        try {
            while (true) {
                System.out.println("Welcome");
                Thread.sleep(200);
            }
        } catch (InterruptedException e) {

        }
    }
}

class Thread2 extends Thread {
    public void run() {
        try {
            while (true) {
                System.out.println("Good morning");
                Thread.sleep(200);
            }
        } catch (InterruptedException e) {

        }
    }
}

public class kismat20 {
    public static void main(String[] args) {
        Thread1 t1 = new Thread1();
        Thread2 t2 = new Thread2();
        t1.start();
        t2.start();
    }
}
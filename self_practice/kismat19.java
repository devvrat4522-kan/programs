class A extends Thread {
    public void run() {
        int i = 0;
        try {
            while (i < 5) {
                System.out.println("dev");
                Thread.sleep(4000);
            }
        } catch (InterruptedException e) {
            System.out.println("interrupted ");
        }
    }
}

public class kismat19 {
    public static void main(String[] args) {
        A a = new A();
        a.start();
        a.interrupt();
        System.out.println("Main thread");
    }
}

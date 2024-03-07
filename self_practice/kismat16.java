class thread1 implements Runnable {
    public void run() {
        int i = 0;
        while (i < 10) {
            System.out.println("Thread1 running");
            i++;
        }
    }
}

class thread2 implements Runnable {
    public void run() {
        int i = 0;
        while (i < 10) {
            System.out.println("Thread2 running");
            i++;
        }
    }
}

public class kismat16 {
    public static void main(String[] args) {
        thread1 ob1 = new thread1();
        Thread th = new Thread(ob1);
        th.start();
        thread2 ob2 = new thread2();
        Thread th2 = new Thread(ob2);
        th2.start();
    }
}

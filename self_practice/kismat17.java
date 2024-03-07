class thread1 extends Thread {
    thread1(String st) {
        super(st);
    }

    public void run() {
        System.out.println("thread1");
    }
}

class thread2 extends Thread {
    thread2(String st) {
        super(st);
    }

    public void run() {
        System.out.println("thread2");
    }
}

public class kismat17 {
    public static void main(String[] args) {
        thread1 th = new thread1("devvrat");
        thread2 th1 = new thread2("harry");
        th.start();
        th1.start();
        System.out.println("first thread name : " + th.getName());
        System.out.println("second thread name : " + th1.getName());
    }
}

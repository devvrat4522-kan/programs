// package Threading;
class Myrunnable1 implements Runnable {
    public void run() {
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
        System.out.println("thread1 runnable");
    }
}

class Myrunnable2 implements Runnable {
    public void run() {
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
        System.out.println("thread2 runnable");
    }
}

public class Runnable_method {
    public static void main(String[] args) {
        Myrunnable1 t1 = new Myrunnable1();
        Thread ft1 = new Thread(t1);
        Myrunnable2 t2 = new Myrunnable2();
        Thread ft2 = new Thread(t2);
        ft1.start();
        ft2.start();
    }
}

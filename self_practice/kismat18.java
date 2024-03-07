// class thread1 extends Thread {
//     public void run() {
//         System.out.println("thread1 : " + Thread.currentThread().getName());
//         System.out.println("thread1 : " + Thread.currentThread().getPriority());
//     }
// }

// class thread2 extends Thread {
//     public void run() {
//         System.out.println("thread2 " + Thread.currentThread().getName());
//         System.out.println("thread2 Priority : " + Thread.currentThread().getPriority());
//     }
// }

class thread1 extends Thread {
    thread1(String st) {
        super(st);
    }

    public void run() {
        System.out.println("thread1 " + this.getName());
    }
}

public class kismat18 {
    public static void main(String[] args) {
        thread1 th = new thread1("devvrat");
        thread1 th1 = new thread1("hello");
        thread1 th2 = new thread1("hiii");
        thread1 th3 = new thread1("boy...");
        th3.setPriority(Thread.MAX_PRIORITY);
        th1.setPriority(Thread.MIN_PRIORITY);
        th2.setPriority(Thread.MIN_PRIORITY);
        th.setPriority(Thread.MIN_PRIORITY);
        th3.setPriority(Thread.MIN_PRIORITY);
        th.start();
        th1.start();
        th2.start();
        th3.start();
    }
}


class help implements Runnable {
    Thread thread;
    int count = 0;
    public volatile boolean running = true;

    help(int p) {
        thread = new Thread(this);
        thread.setPriority(p);
    }

    public void run() {
        while (running)
            count++;
    }

    void start() {
        thread.start();
    }

    void stop() {
        running = false;
    }
}

public class thread_priorities {
    public static void main(String[] args) {
        Thread.currentThread().setPriority(Thread.MAX_PRIORITY);
        help hp1 = new help(3);
        help hp2 = new help(7);
        hp1.start();
        hp2.start();
        try {
            Thread.sleep(100);
        } catch (InterruptedException e) {
            System.out.println("Main thread interrupted.");
        }

        hp1.stop();
        hp2.stop();

        try {
            hp1.thread.join();
            hp2.thread.join();
        } catch (InterruptedException e) {
            System.out.println("InterruptedException caught");
        }
        System.out.println("Low-priority thread: " + hp1.count);
        System.out.println("High-priority thread: " + hp2.count);
    }
}

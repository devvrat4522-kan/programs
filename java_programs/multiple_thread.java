
class help implements Runnable {
    Thread thread;
    String nm;

    help(String name) {
        nm = name;
        thread = new Thread(this, nm);
        thread.start();
    }

    public void run() {
        System.out.println("Thread Name : " + thread.getName());
        try {
            for (int i = 5; i >= 0; i--) {
                System.out.println(nm + " : " + i);
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            System.out.println(" Interrupted Exception ");
        }
        System.out.println(" Thread Executed successfully " + Thread.currentThread().getName());
    }
}

public class multiple_thread {
    public static void main(String[] args) {
        new help("first thread");
        new help("second thread");
        new help("third thread");
        try {
            Thread.sleep(10000);
        } catch (InterruptedException e) {
            System.out.println("suspended");
        }
        System.out.println("Main thread Executed Successfully ! ");
    }

}

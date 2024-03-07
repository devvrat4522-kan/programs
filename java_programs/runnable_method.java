
class help implements Runnable {
    Thread t;

    help() {
        t = new Thread(this, "Demo thread");
        System.out.println("Child Thread intiated " + t);
        t.start();
    }

    public void run() {
        try {
            for (int i = 0; i <= 5; i++) {
                System.out.println("Child : " + i);
                Thread.sleep(500);
            }
        } catch (InterruptedException e) {
            System.out.println("Child Interrupted ");
        }
        System.out.println("Child Completed");
    }
}

public class runnable_method {
    public static void main(String[] args) {
        new help();
        try {
            for (int i = 5; i >= 0; i--) {
                System.out.println(i + " ");
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            System.out.println("Exception");
        }
        System.out.println("Main thread completed");
    }
}

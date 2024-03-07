class callme {
    String msg;

    // Thread t;
    synchronized public void call(String msg) {
        System.out.print("[ " + msg);
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
        }
        System.out.println(" ]");
    }
}

class caller implements Runnable {
    String msg;
    callme obj;
    Thread t;

    caller(callme targ, String st) {
        msg = st;
        obj = targ;
        t = new Thread(this);
        t.start();
    }

    public void run() {
        obj.call(msg);
    }
}

public class synchronize_method {
    public static void main(String[] args) {
        callme cm = new callme();
        caller c1 = new caller(cm, "dev");
        caller c2 = new caller(cm, "world");
        caller c3 = new caller(cm, "hurrah");
        try {
            c3.t.join();
            c2.t.join();
            c1.t.join();
        } catch (Exception e) {
        }
    }
}

class product {
    int num = 0;
    boolean use = false;

    public synchronized void get() {
        while (!use) {
            try {
                wait();
            } catch (InterruptedException e) {
            }
        }
        System.out.println("get : " + num);
        use = false;
        notify();
    }

    public synchronized void set(int i) {
        this.num = i;
        while (use) {
            try {
                wait();
            } catch (InterruptedException e) {
            }
        }
        System.out.println("set : " + num);
        use = true;
        notify();

    }
}

class Producer implements Runnable {
    product p;

    Producer(product p) {
        this.p = p;
        Thread t = new Thread(this, "producer");
        t.start();
    }

    public void run() {
        int i = 0;
        while (true) {
            p.set(i++);
            try {
                Thread.sleep(2000);
            } catch (InterruptedException e) {

            }
        }
    }
}

class Consumer implements Runnable {
    product p1;

    Consumer(product p1) {
        this.p1 = p1;
        Thread t = new Thread(this, "consumer");
        t.start();
    }

    public void run() {
        while (true) {
            p1.get();
            try {
                Thread.sleep(2000);
            } catch (InterruptedException e) {

            }
        }
    }
}

public class kismat21 {
    public static void main(String[] args) {
        product p = new product();
        Producer p1 = new Producer(p);
        Consumer p2 = new Consumer(p);
        // p1.start();
        // p2.start();
    }
}



class Product {
    int num = 0;
    boolean use = false;

    void set(int i) {
        this.num = i;
        while (use) {
            try {
                wait();
            } catch (InterruptedException e) {

            }
        }
        System.out.println("get : " + num);
        use = false;
    }

    void get() {
        while (!use) {
            try {
                wait();
            } catch (InterruptedException e) {

            }
        }
        System.out.println("get : " + num);
        use = true;
    }
}

class Producer implements Runnable {
    Product pt;

    Producer(Product pt) {
        this.pt = pt;
        Thread t = new Thread(this, "Producer");
        t.start();
    }

    public void run() {

    }
}

class Consumer implements Runnable {
    public void run() {

    }
}

public class prod_con {

}

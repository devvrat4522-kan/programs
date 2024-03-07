package Thread;

import Thread.*;

public class Main {
    public static void main(String[] args) {
        new runnable_method();
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

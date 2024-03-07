class StackException extends Exception {
    public StackException(String msg) {
        super("StackException: " + msg);
    }
}

class Stack {
    Object arr[];
    int size = 10, top;

    Stack() {
        arr = new Object[10];
        top = -1;
    }

    public synchronized void push(int val) throws StackException {
        if (top == size - 1)
            throw new StackException("Stack overflow");
        top++;
        arr[top] = val;
        System.out.println("Pushed " + val);
    }

    public synchronized void pop() throws StackException {
        if (top == -1) {
            throw new StackException("Stack underflow");
        }
        System.out.println("Popped: " + arr[top--]);
    }
}

// class thread1 implements Runnable {
// Stack st1;

// thread1(Stack st) {
// st1 = st;
// }

// }

// class thread2 implements Runnable {
// Stack st1;

// thread2(Stack st) {
// st1 = st;
// }

// }

public class innerclass {
    public static void main(String[] args) {
        Stack st = new Stack();
        Thread t1 = new Thread(new Runnable() {
            public void run() {
                try {
                    for (int i = 0; i < 15; i++) {
                        st.push(i);
                        Thread.sleep(1000);
                    }
                } catch (InterruptedException | StackException e) {
                    System.out.println("intruubg");
                }
            }
        });

        Thread t2 = new Thread(new Runnable() {
            public void run() {
                try {
                    for (int i = 0; i < 15; i++) {
                        st.pop();
                        Thread.sleep(1500);
                    }
                } catch (InterruptedException | StackException e) {
                    System.out.println("intruubg");
                }
            }
        });
        t1.start();
        t2.start();
    }
}
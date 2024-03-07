public class MyStack {

    private int maxSize;
    private int[] stackArray;
    private int top;

    public MyStack(int size) {
        this.maxSize = size;
        this.stackArray = new int[maxSize];
        this.top = -1;
    }

    public synchronized void push(int value) throws StackException {
        if (top == maxSize - 1) {
            throw new StackException("Stack overflow");
        }
        stackArray[++top] = value;
        System.out.println("Pushed: " + value);
    }

    public synchronized int pop() throws StackException {
        if (top == -1) {
            throw new StackException("Stack underflow");
        }
        int value = stackArray[top--];
        System.out.println("Popped: " + value);
        return value;
    }

    public static void main(String[] args) {
        MyStack myStack = new MyStack(10);

        // Thread for pushing numbers from 1 to 15
        Thread pushThread = new Thread(new PushRunnable(myStack));

        // Thread for popping 15 times
        Thread popThread = new Thread(new PopRunnable(myStack));

        // Start both threads
        pushThread.start();
        popThread.start();
    }
}

class StackException extends Exception {
    public StackException(String msg) {
        super("StackException: " + msg);
    }
}

class PushRunnable implements Runnable {
    private MyStack myStack;

    public PushRunnable(MyStack myStack) {
        this.myStack = myStack;
    }

    @Override
    public void run() {
        try {
            for (int i = 1; i <= 15; i++) {
                myStack.push(i);
                Thread.sleep(100); // Simulate some processing time
            }
        } catch (StackException | InterruptedException e) {
            System.err.println(e.getMessage());
        }
    }
}

class PopRunnable implements Runnable {
    private MyStack myStack;

    public PopRunnable(MyStack myStack) {
        this.myStack = myStack;
    }

    @Override
    public void run() {
        try {
            for (int i = 1; i <= 15; i++) {
                myStack.pop();
                Thread.sleep(150); // Simulate some processing time
            }
        } catch (StackException | InterruptedException e) {
            System.err.println(e.getMessage());
        }
    }
}

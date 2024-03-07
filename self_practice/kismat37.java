import java.util.EmptyStackException;

class Stack<T> {
    private Object arr[];
    int size;
    int top;

    Stack(int n) {
        this.arr = new Object[n];
        this.size = n;
        top = -1;
    }

    void push(T v) {
        if (top == size - 1)
            throw new StackOverflowError("Overflowed");
        top++;
        arr[top] = v;
    }

    T pop() {
        if (top == -1)
            throw new EmptyStackException();
        return (T) arr[top--];
    }
}

public class kismat37 {
    public static void main(String[] args) {
        Stack<Integer> intStack = new Stack<>(6);
        // stack1.push(6);
        intStack.push(1);
        intStack.push(2);
        intStack.push(3);
        intStack.push(4);
        intStack.push(5);
        System.out.println("Popped: " + intStack.pop()); // 5
        System.out.println("Popped: " + intStack.pop()); // 4
        System.out.println("Popped: " + intStack.pop()); // 3
        System.out.println("Popped: " + intStack.pop()); // 2
        System.out.println("Popped: " + intStack.pop()); // 1

    }
}

// import java.util.EmptyStackException;

// public class kismat37<T> {
// private Object[] array;
// private int size;
// private int top;

// public kismat37(int n) {
// if (n <= 0) {
// throw new IllegalArgumentException("Stack size must be greater than 0");
// }
// this.size = n;
// this.array = new Object[n];
// this.top = -1; // Stack is initially empty
// }

// public void push(T val) {
// if (top == size - 1) {
// throw new StackOverflowError("Stack overflow");
// }
// array[++top] = val;
// }

// public T pop() {
// if (top == -1) {
// throw new EmptyStackException();
// }
// return (T) array[top--];
// }

// public static void main(String[] args) {
// kismat37<Integer> intStack = new kismat37<>(5);

// // Pushing elements onto the stack
// intStack.push(1);
// intStack.push(2);
// intStack.push(3);
// intStack.push(4);
// intStack.push(5);

// // Attempting to push more than the stack size will result in overflow
// // intStack.push(6); // Uncommenting this line will throw StackOverflowError

// // Popping elements from the stack
// System.out.println("Popped: " + intStack.pop()); // 5
// System.out.println("Popped: " + intStack.pop()); // 4
// System.out.println("Popped: " + intStack.pop()); // 3
// System.out.println("Popped: " + intStack.pop()); // 2
// System.out.println("Popped: " + intStack.pop()); // 1

// // Attempting to pop from an empty stack will result in underflow
// // System.out.println("Popped: " + intStack.pop()); // Uncommenting this line
// // will throw EmptyStackException
// }

import java.util.Scanner;

class Vector {
    public double arr[] = new double[10];

    Vector(int[] s) {
        int i;
        for (i = 0; i < 5; i++) {
            this.arr[i] = s[i];
        }
    }

    Vector(Vector v) {
        int i;
        for (i = 0; i < 5; i++) {
            this.arr[i] = arr[i];
        }
    }

    public void set(int i, int value) {
        arr[i] = value;
    }

    public void print() {
        for (int i = 0; i < 5; i++) {
            System.out.println(arr[i]);
        }
    }
}

public class selfone {
    public static void main(String[] args) {
        int arr[] = new int[5];
        System.out.println("Enter the array element : ");
        for (int i = 0; i < 5; i++) {
            Scanner sc = new Scanner(System.in);
            arr[i] = sc.nextInt();
        }
        Vector obj = new Vector(arr);
        obj.set(3, 9);
        obj.print();
    }
}
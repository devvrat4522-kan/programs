import java.util.Scanner;

class Vector1 {
    public double arr[] = new double[10];

    Vector1(int[] s) {
        int i;
        for (i = 0; i < 5; i++)
            set(i,s[i]);
    }

    Vector1(Vector1 v) {
        this.arr = v.arr;
    }

    void multiply(int k) {
        int i;
        for (i = 0; i < 5; i++) {
            arr[i] = arr[i] * k;
        }
    }

    void multiply(Vector1 v) {
        int i;
        for (i = 0; i < 5; i++) {
            this.arr[i] = v.arr[i] * arr[i];
        }
    }

    public void set(int i, int value) {
        arr[i] = value;
    }
    public double get(int i) {
        return arr[i];        
    }
    public void print() {
        for (int i = 0; i < 5; i++) {
            System.out.println(arr[i]);
        }
    }
}

public class self_2 {
    public static void main(String[] args) {
        int arr[] = new int[5];
        System.out.println("Enter the array element : ");
        for (int i = 0; i < 5; i++) {
            Scanner sc = new Scanner(System.in);
            arr[i] = sc.nextInt();
        }
        Vector1 obj = new Vector1(arr);
        int arr1[] = new int[5];
        obj.set(3, 9);
        obj.print();
        System.out.println("#################");
        obj.multiply(5);
        System.out.print("After multiplication by ");
        obj.print();
        System.out.println("Enter the matrix to be multiplied ");
        for (int i = 0; i < 5; i++) {
            Scanner sc = new Scanner(System.in);
            arr1[i] = sc.nextInt();
        }
        Vector1 obj1 = new Vector1(arr1);
        obj.multiply(obj1);
        System.out.println("##################");
        obj.print();
    }
}

import java.util.*;

class Vector2 {
    public double arr[] = new double[5];

    Vector2(double s[]) {
        for (int i = 0; i < 5; i++)
            set(i, s[i]);
    }

    Vector2(Vector2 v) {
        this.arr = v.arr;
    }

    public void multiply(double to) {
        int i;
        for (i = 0; i < 5; i++)
            this.arr[i] = arr[i] * to;
    }

    public double multiply(Vector2 v) {
        int i = 0;
        double sum = 0;
        for (i = 0; i < 5; i++) {
            sum += v.arr[i] * this.arr[i];
        }
        return sum;
    }

    void set(int i, double value) {
        this.arr[i] = value;
    }

    public double get(int i) {
        return arr[i];
    }

    public void print() {
        for (int i = 0; i < 5; i++)
            System.out.print(arr[i] + " ");
    }
}

public class kismat4 {
    public static void main(String[] args) {
        double arr[] = new double[5];
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 5; i++) {
            arr[i] = sc.nextInt();
        }
        Vector2 vc = new Vector2(arr);
        Vector2 vc1 = new Vector2(vc);
        System.out.println(vc.get(3));
        // vc.set(3, 9);
        vc.multiply(6.0);
        double arr1[] = new double[5];
        for (int i = 0; i < 5; i++) {
            arr1[i] = sc.nextInt();
        }
        Vector2 vc2 = new Vector2(arr);
        System.out.print(vc.multiply(vc2));
        // vc.print()
    }
}

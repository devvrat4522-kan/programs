/* Try statements can be implicitly nested via calls to methods. */
public class nested_try {
    static void nesttry(int x) {
        int a = 45, b;
        try {
            System.out.println("Method Try");
            if (x == 1) {
                b = a / (x - x);
            }
            if (x == 2) {
                int arr[] = { 1 };
                arr[5] = 9;
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array index out of bound exception ");
        }
    }

    public static void main(String[] args) {
        int a = args.length, b = 4, c;
        // { Normal Nested Try }
        // try {
        // System.out.println("first Try");
        // c = b / a;
        // try {
        // System.out.println("second Try");
        // if (a == 1) {
        // c = a / (a - a); // causes divide-by-zero error if argument length is 1
        // }
        // if (a == 2) {
        // int x[] = { 1 };
        // x[23] = 4; // causes array index out of bound
        // }
        // } catch (ArrayIndexOutOfBoundsException e) {
        // System.out.println("Array Index out of bound " + e);
        // }
        // } catch (ArithmeticException e) {
        // System.out.println("Arithmetic Exception" + e);
        // }

        try {
            System.out.println("Fisrt try");
            c = b / a;
            System.out.println("nesttry called ");
            nesttry(a);
        } catch (ArithmeticException e) {
            System.out.println("ArithmeticException : " + e);
        }
    }
}

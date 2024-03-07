public class cg2 {
    public static int round(float n) {
        if (n - (int) n < 0.5)
            return (int) n;
        return (int) (n + 1);
    }

    public static void naiveDrawLine(int x1, int x2, int y1, int y2) {
        int m;
        m = (y2 - y1) / (x2 - x1);

        for (int x = x1; x <= x2; x++) {

            // Assuming that the round function finds
            // closest integer to a given float.
            int c = 1;
            float y = round(m * x + c);
            System.out.print(x);
            System.out.print(" " + y);
            System.out.println();

        }
    }

    public static void main(String[] args) {
        naiveDrawLine(0, 4, 0, 2);
    }

}

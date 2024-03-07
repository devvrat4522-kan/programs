public class kismat1 {
    public static void main(String[] args) {
        int i, j;
        int arr[] = new int[5];
        for (i = 0; i < 5; i++) {
            arr[i] = Integer.parseInt(args[i]);
        }
        for (i = 1; i < 5; i++) {
            int k = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] >= k) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = k;
        }
        for (i = 0; i < 5; i++) {
            System.out.println(arr[i] + " ");
        }
    }
}

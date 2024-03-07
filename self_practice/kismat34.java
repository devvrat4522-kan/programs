import java.util.*;

public class kismat34 {
    public static void main(String[] args) {
        NavigableSet<Integer> queue = new TreeSet<>(new Comparator<Integer>() {
            public int compare(Integer v1, Integer v2) {
                return (v2 - v1);
            }
        });

        int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 7, 3, 9 };
        for (int item : arr)
            queue.add(item);
        Iterator<Integer> it = queue.descendingIterator();
        while (it.hasNext()) {
            System.out.print(it.next());
        }
    }
}

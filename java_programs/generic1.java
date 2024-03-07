

class help<T extends Number> {
    T num;

    help(T val) {
        num = val;
    }

    double reciprocal(T val) {
        return 1 / val.doubleValue();
    }

}

class Generic<T extends Number, U> {
    T[] arr;

    Generic(T[] arr) {
        this.arr = arr;
    }

    double avg() {
        double sum = 0.0;
        for (T v : arr)
            sum += v.doubleValue();

        return sum / arr.length;
    }

    boolean isequal(Generic<? extends Number, ?> other) {
        if (this.avg() == other.avg())
            return true;
        else
            return false;
    }
}

public class generic1 {
    public static void main(String[] args) {
        help<Integer> hp = new help<Integer>(67);
        System.out.println("value : " + hp.reciprocal(2));
        Integer arr[] = { 1, 2, 3, 4, 5, 6, 7 };
        Double arr1[] = { 1.2, 2.1, 6.7 };
        Generic<Integer, String> ob1 = new Generic(arr);
        Generic<Integer, String> ob2 = new Generic(arr1);
        System.out.println("value : " + ob1.isequal(ob2));
        System.out.println("value : " + ob1.avg());
    }
}

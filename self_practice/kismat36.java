import java.util.*;

class help<T extends Number> {
    public T add(T a, T b) {
        if (a instanceof Integer)
            return  (T)Integer.valueOf((a.intValue()) + (b.intValue()));
        else if (a instanceof Double)
            return (T) Double.valueOf((a.doubleValue()) + (b.doubleValue()));
        throw new IllegalArgumentException("Unsupported data type for addition");
    }

    public T sub(T a, T b) {
        if (a instanceof Integer)
            return (T) Integer.valueOf((a.intValue()) - (b.intValue()));
        else if (a instanceof Double)
            return (T) Double.valueOf((a.doubleValue()) - (b.doubleValue()));
        throw new IllegalArgumentException("Unsupported data type for addition");
    }
}

public class kismat36 {
    public static void main(String[] args) {
        help<Integer> hp = new help<Integer>();
        System.out.println("Addition : " + (hp.add(5, 6)));
        System.out.println("Subtration : " + (hp.sub(7, 6)));
    }
}

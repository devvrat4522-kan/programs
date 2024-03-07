import java.util.*;

public class unique_char {
    public static void main(String[] args) {
        String st[] = { "devvrat", "ufydgbf", "uifydgunmk", "devvv" };
        List<String> ls = new ArrayList<String>();
        for (int i = 0; i < 4; i++)
            ls.add(st[i]);
        List<Integer> cnt = new ArrayList<Integer>();
        for (int i = 0; i < ls.size(); i++) {
            Set<Character> c = new HashSet<Character>();
            for (int j = 0; j < ls.get(i).length(); j++) {
                c.add(ls.get(i).charAt(j));
            }
            cnt.add(c.size());
        }
        System.out.println("Unique Character of Each String : ");
        for (int i = 0; i < cnt.size(); i++) {
            System.out.println(cnt.get(i));
        }
    }
}

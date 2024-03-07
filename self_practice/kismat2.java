import java.util.Scanner;

public class kismat2 {
    public static void main(String[] args) {
        int i;

        int ch[] = new int[26];
        String st;
        Scanner sc = new Scanner(System.in);
        st = sc.nextLine();
        int l = st.length();
        for (i = 0; i < l; i++) {
            char c = st.charAt(i);
            ch[c - 'a']++;
        }
        for (i = 0; i < l; i++) {
            if (ch[st.charAt(i) - 'a'] != 0)
                System.out.println(st.charAt(i) + " " + ch[st.charAt(i) - 'a']);
            ch[st.charAt(i) - 'a'] = 0;
        }

    }
    // for (i = 0; i < 26; i++) {
    // if (ch[i] != 0) {
    // System.out.println(st.charAt(i) + " " + ch[i]);
    // }
    // }
    // System.out.println("djgdvb");
}

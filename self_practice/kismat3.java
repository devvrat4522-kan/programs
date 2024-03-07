import java.util.Scanner;

public class kismat3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();// input
        sc.close();
        int f = 1;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) != '0' && str.charAt(i) != '1')
                f = 0;
            break;
        }
        if (f == 0) {
            System.out.println("input is not in proper format");
        } 
        else {
            double ans = 0;
            for (int i = str.length() - 1; i >= 0; i--) {
                if (str.charAt(i) == '1') {
                    ans = ans + Math.pow(2, str.length() - 1 - i);
                }
            }
            System.out.println(ans);
        }
    }
}

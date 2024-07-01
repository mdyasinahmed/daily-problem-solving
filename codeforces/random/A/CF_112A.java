import java.util.Scanner;

public class CF_112A {
    public static int compStr(String str1, String str2) {
        int comp = str1.compareToIgnoreCase(str2);

        if (comp < 0) {
            return -1;
        } else if (comp > 0) {
            return 1;
        } else {
            return 0;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        String S1 = sc.next();
        String S2 = sc.next();

        System.out.println(compStr(S1, S2));

    }
}
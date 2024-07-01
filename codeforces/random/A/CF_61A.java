import java.util.Scanner;

public class CF_61A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        String s1 = sc.next();
        String s2 = sc.next();

        StringBuilder S = new StringBuilder();

        for(int i=0; i<s1.length(); ++i) {
            if(s1.charAt(i) == s2.charAt(i)) {
                S.append('0');
            } else {
                S.append('1');
            }
        }

        System.out.println(S.toString());
    }
}
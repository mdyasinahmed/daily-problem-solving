import java.util.Arrays;
import java.util.Scanner;

public class CF_1722A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long t = sc.nextLong();
        int n;
        String str;

        while(t-- > 0){
            n = sc.nextInt();

            str = sc.next();

            char[] charArr = str.toCharArray();
            Arrays.sort(charArr);

            String S = new String(charArr);

            // if(S == "Timru") {
            //     System.out.println("YES");
            // } else {
            //     System.out.println("NO");
            // } 

            System.out.println(S.equals("Timru") ? "YES" : "NO");
        }
    }
}


import java.util.Scanner;

public class CF_1367A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        String str;

        while(t-- > 0) {
            str = sc.next();
            String s = str.toLowerCase();
            if(s.compareTo("yes") == 0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
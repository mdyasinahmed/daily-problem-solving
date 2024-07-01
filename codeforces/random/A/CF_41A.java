import java.util.Scanner;

public class CF_41A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        String s1 = sc.next();
        String s2 = sc.next();

        StringBuilder S1 = new StringBuilder(s1).reverse();

        String rS1 = S1.toString();

        if(rS1.equals(s2)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

    }
}
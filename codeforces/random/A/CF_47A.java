import java.util.Scanner;

public class CF_47A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int t = 8*n+1;
        int T = (int) Math.sqrt(t);

        if(T*T == t) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
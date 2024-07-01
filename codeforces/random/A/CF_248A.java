import java.util.Scanner;

public class CF_248A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int l, r, left=0, right=0;

        for(int i=0; i<n; ++i){
            l = sc.nextInt();
            r = sc.nextInt();
            left += l;
            right += r;
        }

        System.out.println(Math.min(left, n-left) + Math.min(right, n-right));
    }
}
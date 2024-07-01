import java.util.Scanner;

public class CF_116A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int R=0, C=0;

        
        while(n!=0) {
            int a = sc.nextInt(), b = sc.nextInt();
            R -= a;
		    R += b;
		    C = Math.max(C, R);

            n--;
        }

        System.out.println(C);
    }
}
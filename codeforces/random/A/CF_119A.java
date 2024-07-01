import java.util.Scanner;

public class CF_119A {
    static int gcd(int x, int y) {
        int i;
        if (x < y) i = x;
        else i = y;
    
        for (i = i; i > 1; i--) {
            if (x % i == 0 && y % i == 0) return i;
        }
    
        return 1;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int n = sc.nextInt();
        
        int countS = 0, countA = 0;
        while(n>0) {
            int S, A;
            S = gcd(a,n);
            n = n-S;
            if(n<0) {
                countS++;
            }
            // System.out.println(n);
            A = gcd(b, n);
            n = n - A;
            if(n<0) {
                countA++;
            }
            // System.out.println(n);
        }

        if(countS<countA) System.out.println('0');
        else System.out.println('1');

        
    }
}
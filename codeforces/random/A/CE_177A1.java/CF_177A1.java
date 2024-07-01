import java.util.Scanner;

public class CF_177A1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long i, j;
        long n, sum = 0;

        n = sc.nextLong();
        long[][] a = new long[(int) n][(int) n];

        for(i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                a[(int) i][(int) j] = sc.nextLong();
            }
        }

        // main diagonal
        for(i=0, j=0; i<n && j<n; i++, j++) {
            sum += a[(int)i][(int)j];
            a[(int)i][(int)j] = 0;
        }

        // secondary diagonal
        for(i=0, j=n-1; i<n && j>=0; i++, j--) {
            sum += a[(int)i][(int)j];
            a[(int)i][(int)j] = 0;
        }

        // mid row
        for(i=0; i<n; i++) {
            sum += a[(int)(n/2)][(int)i];
            a[(int)(n/2)][(int)i] = 0;
        }

        // mid column
        for(i=0; i<n; i++) {
            sum += a[(int)i][(int)(n/2)];
            a[(int)i][(int)(n/2)] = 0;
        }

        System.out.println(sum);
    }
}

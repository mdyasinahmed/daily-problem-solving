import java.util.Arrays;
import java.util.Scanner;

public class CF_1095B2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[] a = new int[n];

        for(int i=0; i<n; i++) {
            a[i] = scanner.nextInt();
        }

        Arrays.sort(a);

        int ans = Math.min(a[n-2] - a[0], a[n-1] - a[1]);
        
        System.out.println(ans);
    }
}

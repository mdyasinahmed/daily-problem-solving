import java.util.Arrays;
import java.util.Scanner;

public class CF_467A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        int count=0;
        while(t != 0) {
            int p = sc.nextInt();
            int q = sc.nextInt();

            if(q-p >= 2) {
                count++;
            }
            t--;
        }
        
        System.out.println(count);
    }
}
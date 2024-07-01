import java.util.Arrays;
import java.util.Scanner;

public class CF_469A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        
        while(t != 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int n = sc.nextInt();
            
            int count=0;
            while(a!=n+1 || b!=n+1) {
                count++;
                a+=b;
                b+=a;     
            }
            System.out.println(count);
            
            t--;
        } 
        
    }
}
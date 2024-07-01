import java.util.Scanner;

public class CF_703A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        int c1=0, c2=0;
        while(t-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();    

            if(n>m) c1++;
            else if(m>n) c2++;
        }
        if(c1>c2) System.out.println("Mishka");
        if(c1<c2) System.out.println("Chris");
        if(c1==c2) System.out.println("Friendship is magic!^^");
    }
}
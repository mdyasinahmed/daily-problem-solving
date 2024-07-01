import java.util.Scanner;

public class CF_1351B {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        int i=0;
        while(i<t) {
            int a1 = sc.nextInt();
            int b1 = sc.nextInt();
            int a2 = sc.nextInt();
            int b2 = sc.nextInt();
            
            if(a1>b1) {
                int temp1 = a1; a1 = b1; b1 = temp1;
            }

            if(a2>b2) {
                int temp2 = a2; a2 = b2; b2 = temp2;
            }
        

            if(a1+a2 == b1 && a1+a2 == b2) {
                System.out.println("YES");
            } else {
                System.out.println("NO");

            }

            i++;
        }
    }
}
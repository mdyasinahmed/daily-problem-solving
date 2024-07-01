import java.util.Scanner;

public class CF_96A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();

        int count0 = 0, count1 = 0;

        for(int i=0; i<s.length()-1; i++) {
            if(s.charAt(i)==0) {
                if(s.charAt(i)==s.charAt(i+1)) {
                    count0++;
                } else {
                    count0=0;
                }
            }
            if(s.charAt(i)==1) {
                if(s.charAt(i)==s.charAt(i+1)) {
                    count1++;
                } else {
                    count1=0;
                }
            }
        }
        System.out.println(count0);
        System.out.println(count1);

        if(count1 >= 7 || count0>=7) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
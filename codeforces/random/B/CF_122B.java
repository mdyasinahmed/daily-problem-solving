import java.util.Scanner;

public class CF_122B {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        String str = sc.next();

        int four = 0, seven = 0;
        for(int i=0; i<str.length(); i++) {
            if(str.charAt(i) == '4') four++;
            if(str.charAt(i) == '7') seven++;
        }

        if(four==0 && seven==0) {
            System.out.println("-1");
        } else if(seven > four) {
            System.out.println("7");
        } else {
            System.out.println("4");
        }
    }
}
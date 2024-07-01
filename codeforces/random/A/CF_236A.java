import java.util.Arrays;
import java.util.Scanner;

public class CF_236A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char[] s = sc.next().toCharArray();

        int l = s.length;
        Arrays.sort(s);
        System.out.println(s);
        System.out.println(l);



        int count = 1;
        for(int i=0; i<=l-1; i++) {
            if(s[i] != s[i+1]) {
                count++;
            }
        }

        if(count%2 == 0) {
            System.out.println("CHAT WITH HER!");
        } else {
            System.out.println("IGNORE HIM!");
        }

    }
}

import java.util.Scanner;

public class CF_32B {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        String str;
        str = sc.next();

        String str2 = "";

        for(int i=0; i<str.length(); i++) {
            if(str.charAt(i)=='.') {
                str2+='0';
            }
            if(str.charAt(i)=='-' && str.charAt(i+1)=='.'){
                str2+='1';
                i++;
            }
            if(str.charAt(i)=='-' && str.charAt(i+1)=='-'){
                str2+='2';
                i++;
            }
        }

        System.out.println(str2);
    }
}
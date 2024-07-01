import java.util.Scanner;

public class CF_131A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();

        StringBuilder newStr = new StringBuilder();

        for(int i=0; i<str.length(); i++) {
            if(i == 0) newStr.append(Character.toUpperCase(str.charAt(i)));
            
            else if(Character.isUpperCase(str.charAt(i))) newStr.append(Character.toLowerCase(str.charAt(i)));
            
            else newStr.append(str.charAt(i));
        }

        System.out.println(newStr.toString());
    }
}

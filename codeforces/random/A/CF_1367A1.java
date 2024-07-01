import java.util.Arrays;
import java.util.Scanner;

public class CF_1367A1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-- >= 0) {
            String input = sc.nextLine();

            StringBuilder result = new StringBuilder();

            for (int i = 0; i < input.length() - 1; i++) {
                if (input.charAt(i) != input.charAt(i + 1)) {
                    result.append(input.charAt(i));
                }
            }

            // Include the last character of the original string
            result.append(input.charAt(input.length() - 1));

            System.out.println("Remaining string: " + result);
                // System.out.println(t);
            }
    }
}

// https://codeforces.com/problemset/problem/1367/A
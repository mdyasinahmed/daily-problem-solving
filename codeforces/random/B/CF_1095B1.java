import java.util.Arrays;
import java.util.Scanner;

public class CF_1095B1 {
    public static int arrayMax(int[] arr){
        int maxValue = arr[1];
        for(int i = 2; i < arr.length; i++) {
            if (arr[i] > maxValue) {
                maxValue = arr[i];
            }
        }
        return maxValue;
    }
    public static int arrayMin(int[] arr){
        int minValue = arr[1];
        for(int i = 2; i < arr.length; i++) {
            if(arr[i] < minValue) {
                minValue = arr[i];
            }
        }
        return minValue;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[] a = new int[n];

        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }

        int aMax = arrayMax(a);
        int aMin = arrayMin(a);

        int Mn = 0, Mx = 0;

        for(int i=1; i<n; i++) {
            if(a[i] == aMax) Mx = i;
            if(a[i] == aMin) Mn = i;
        }
        
        System.out.println(Mx-Mn);
    }
}

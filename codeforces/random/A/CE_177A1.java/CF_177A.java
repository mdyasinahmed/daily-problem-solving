import java.util.Scanner;

public class CF_177A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int i, j;
        
        
        for(i=1; i<=n; i++) {
            for(j=1; j<=n; j++) {
                int arr[][];= arr[i][j];
                // arr[i][j] = sc.nextInt();

                arr[i][j] = 1;
                if(i== ((n/2)+1) || j== ((n/2)+1)) {
                    System.out.print((arr[i][j] = 0 )+ " ");
                } else if(i==j) {
                    System.out.print((arr[i][j] = 2) + " ");
                } else if (i + j == n - 1) {
                    System.out.print((arr[i][j] = 3) + " ");
                }
                else{
                    System.out.print((arr[i][j] = 1) + " ");
                }

                
            }
            System.out.print("\n");
        }
    }
}
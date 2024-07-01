import java.util.Arrays;
import java.util.Scanner;

public class CF_510A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        int count = 0;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(i%2 == 0) {
                    if(j==m && count==0) {
                        System.out.print("#");
                        count++;
                    } 
                    else if(j==1 && count>0){
                        System.out.print("#");
                        count=0;
                    }
                    else{
                        System.out.print(".");
                    }
                } else {
                    System.out.print("#");
                    count++;
                }
            }
            System.out.print("\n");
        }

        
    
            

        
    }
}
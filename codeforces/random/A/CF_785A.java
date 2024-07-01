import java.util.Scanner;

public class CF_785A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        int sum = 0;
        String str;

        while(t-- >= 0) {
            str = sc.nextLine();

            if(str.compareTo("Tetrahedron") == 0){
               sum += 4; 
            } 
            else if(str.compareTo("Cube") == 0){
               sum += 6; 
            } 
            else if(str.compareTo("Octahedron") == 0) {
                sum += 8;
            }
            else if(str.compareTo("Dodecahedron") == 0) {
                sum += 12;
            }
            else if(str.compareTo("Icosahedron") == 0) {
                sum += 20;
            }
        }

        System.out.println(sum);
    }
}
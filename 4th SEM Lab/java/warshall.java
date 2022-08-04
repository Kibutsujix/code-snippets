import java.util.Scanner;
public class warshall {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int am[][] = new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                am[i][j] = sc.nextInt();
            }
        }
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    am[i][j] = am[i][j] | (am[i][k] & am[k][j]); 
                }
            }
        }
        System.out.println("Path matrix : ");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(am[i][j]+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}

import java.util.Scanner;
public class prim {
    static void prims(int am[][],int n,int source){
        int[] vis = new int[n];
        int[] unvis = new int[n];
        int index=0;
        int cost=0;
        int src = 0;
        vis[source] = 1;
        unvis[source] = 0;
        for(int i=0;i<n;i++){
            if(i!=source){
                vis[i] = 0;
                unvis[i] = 1;
            }
            else
                continue;
        }
        for(int i=1;i<n;i++){
            int min = 999;
            for(int j=0;j<n;j++){
                if(vis[j] == 1){
                    for(int k=0;k<n;k++){
                        if((unvis[k] == 1) &&(am[j][k] != 999)){
                            if(min > am[j][k]){
                                min = am[j][k];
                                src = j;
                                index = k;
                            }
                        }
                    }
                }
            }
            vis[index] = 1;
            unvis[index] = 0;
            cost += min;
            print("Edge b/w "+(src+1)+" & "+(index+1) + " is added. (cost "+ min + ")");
            
        }
        print("");
        print("Cost of the MCST : "+cost);
        
    }
    static void print(Object line){
        System.out.println(line);
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        print("Enter number of vertices : ");
        int n = scan.nextInt();
        int am[][] = new int[n][n];
        print("Enter adjacency matrix : ");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                am[i][j] = scan.nextInt();
            }
        }
        print("");
        print("Enter source : ");
        int source = scan.nextInt();
        print("number of edges in MCST : " + (n-1));
        print("");
        prims(am,n,source);
        scan.close();
    }
}

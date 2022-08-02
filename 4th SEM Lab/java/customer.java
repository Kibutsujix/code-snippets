import java.util.Scanner;
import java.util.StringTokenizer;
public class customer {
    private String name,dob;
    public customer(String name,String dob){
        this.name = name;
        this.dob = dob;
    }

    public void display(StringTokenizer s){
        System.out.println("Name : "+name);
        while(s.hasMoreTokens()){
            System.out.print(s.nextToken());
            if(s.hasMoreTokens()){
                System.out.print(",");
            }
        }    
    }

    public void token(){
        StringTokenizer s = new StringTokenizer(dob,"/");
        display(s);
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter name : ");
        String n = sc.next();
        System.out.print("Enter DoB : ");
        String dob = sc.next();
        customer c = new customer(n, dob);;
        c.token();
        System.out.println();
        sc.close();
    }
}

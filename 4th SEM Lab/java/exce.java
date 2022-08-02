import java.util.Scanner;
public class exce {
    private int a,b;
    public exce(int a,int b){
        this.a = a;
        this.b = b;
    }
    void compute() throws ArithmeticException{
        if(b==0){
            throw new ArithmeticException("Divide by zero");
        }
        System.out.println("value : "+(a/b));
    }
    public static void main(String args[]){
        System.out.print("Enter a : ");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        System.out.print("Enter b : ");
        int b = sc.nextInt();
        exce ex = new exce(a, b);
        try{
            ex.compute();
        }catch(ArithmeticException e){
            e.printStackTrace();
        }
        sc.close();
    }
}

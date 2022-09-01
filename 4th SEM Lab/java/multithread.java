import java.util.Random;
class randomnum extends Thread{
    public void run(){
        Random rand;
        int i =0,m;
        do{
            rand = new Random();
            m = rand.nextInt(100);
            System.out.println(m+" ");
            i++;
            try{
                Thread.sleep(1000);
            }catch(InterruptedException e){
                e.printStackTrace();
            }
        }while(i<10);
    }
}
class square_num extends Thread{
    int n;
    public void run(){
        System.out.println("Square of a number "+this.n+" is : "+ Math.pow(this.n, 2));
    }
    public square_num(int a){
        this.n = a;
    }
}
class cube_num extends Thread{
    int n;
    public void run(){
        System.out.println("Cube of a number "+this.n+" is : "+Math.pow(this.n, 3));
    }
    public cube_num(int a){
        this.n = a;
    }
}
public class multithread {
    public static void main(String args[]) {
        Random rnd = new Random();
        Thread thread1 = new randomnum();
        thread1.start();
        Thread thread2 = new square_num(rnd.nextInt(10));
        thread2.start();
        Thread thread3 = new cube_num(rnd.nextInt(10));
        thread3.start();
    }
}

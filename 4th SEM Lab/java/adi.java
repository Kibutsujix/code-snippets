import java .util.Scanner;   

public class adi {
    void splitter(){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter string to be split : ");
        String sent = scan.nextLine();
        String splitted[] = sent.split(" ");
        for(String val : splitted){
            System.out.println(val);
        }
        scan.close();
    }
    public static void main(String args[]){
        adi a = new adi();
        a.splitter();
    }
}
/*
 String[] b
 string b[]
 */
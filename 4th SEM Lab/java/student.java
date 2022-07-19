import java.util.Scanner;

public class student{

    public String usn,name,branch,phno;
    public student(String usn,String name,String branch,String phno){
        this.usn = usn;
        this.name = name;
        this.branch = branch;
        this.phno = phno;
    }
    // print functions
    static void print(Object line){
        System.out.print(line);
    }
    static void println(Object line){
        System.out.println(line);
    }
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        print("Enter number of students : ");
        int n = scan.nextInt();
        student obj[] = new student[n];
        println("Enter data of  "+n+" students");
        for(int i=0;i<n;i++){
            println("Student "+(i+1)+" : ");
            print("USN : ");
            String usn = scan.next();
            print("Name : ");
            String name = scan.next();
            print("Branch : ");
            String branch = scan.next();
            print("Ph.Number : ");
            String phno = scan.next();
            obj[i] = new student(usn, name, branch, phno);
            
        }

        println("Student data : ");
        for(student x : obj){
            println("USN : "+x.usn);
            println("Name : "+x.name);
            println("Branch : "+x.branch);
            println("Ph.Number : "+x.phno);
        }
        
        scan.close();
    }
}
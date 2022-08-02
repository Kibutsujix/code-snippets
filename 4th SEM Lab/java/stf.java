import java.util.Scanner;

class staff{
    String id,name,salary,phno;
    public staff(String id,String name,String salary,String phno){
        this.id = id;
        this.name = name;
        this.salary = salary;
        this.phno = phno;
    }

    void display(){
        System.out.println("ID : "+id);
        System.out.println("Name : "+name);
        System.out.println("Salary : "+salary);
        System.out.println("Phone : "+phno);
    }
}

class teaching extends staff{
    private String domain,pub;
    public teaching(String st,String nm,String sl,String ph,String dom,String pu){
        super(st, nm, sl, pu);
        domain = dom;
        pub = pu;
    }
    void display(){
        super.display();
        System.out.println("Domain : "+domain);
        System.out.println("Publications : "+pub);
    }
}

class technical extends staff{
    private String skills;
    public technical(String st,String nm,String sl,String ph,String sk){
        super(st, nm, sl, ph);
        skills = sk;
    }
    void display(){
        super.display();
        System.out.println("Skills : "+skills);
    }
}

class contract extends staff{
    private String period;
    public contract(String st,String nm,String sl,String ph,String pr){
        super(st, nm, sl, ph);
        period = pr;
    }
    void display(){
        super.display();
        System.out.println("Period : "+period);
    }
}

public class stf{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        teaching t1 = new teaching("1","a","25k","123","CSE","OS");
        teaching t2 = new teaching("2","b","23k","234","CSE","OS");
        teaching t3 = new teaching("3","c","25k","523","CSE","OS");
        
        technical tc1 = new technical("4", "d", "34k", "476", "daa");
        technical tc2 = new technical("5", "e", "31k", "176", "daa");
        technical tc3 = new technical("6", "f", "32k", "876", "daa");
        
        contract c1 = new contract("7", "g", "28k", "869", "24");
        contract c2 = new contract("8", "h", "22k", "369", "44");
        contract c3 = new contract("9", "i", "21k", "269", "14");
        
        t1.display();
        t2.display();
        t3.display();
        tc1.display();
        tc2.display();
        tc3.display();
        c1.display();
        c2.display();
        c3.display();
        
        sc.close();
    }
}
import java.util.Scanner;
public class stack {
    public static Scanner scan = new Scanner(System.in);
    static int top = -1;
    static int arr[] = new int[10];

    static void print(Object line){
        System.out.print(line);
    }
    static void println(Object line){
        System.out.println(line);
    }
    void push(){
        if(top >= arr.length){
            println("Stack full");
            return;
        }
        print("Enter element to be pushed : ");
        int ele = scan.nextInt();
        arr[++top] = ele;
    }

    void pop(){
        if(top == -1){
            println("Stack empty");
            return;
        }
        println(""+arr[top--]);
    }

    void display(){
        for(int i = top;i>=0;i--){
            println(""+arr[i]);
        }
    }
    public static void main(String args[]){
        stack st = new stack();
        while(true){
            println("Enter\n1.Push\n2.Pop\n3.Display\n4.exit");
            int choice = scan.nextInt();
                switch(choice){
                    case 1 : st.push();
                            break;
                    case 2 : st.pop();
                    break;
                    case 3 :st.display();
                    break;
                    case 4 : System.exit(0);  
                }

        }
        


    }
    
}
/*
Enter
1.Push
2.Pop
3.Display
4.exit
1
Enter element to be pushed : 14
Enter
1.Push
2.Pop
3.Display
4.exit
1
Enter element to be pushed : 15
Enter
1.Push
2.Pop
3.Display
4.exit
2
15
Enter
1.Push
2.Pop
3.Display
4.exit
1
Enter element to be pushed : 13
Enter
1.Push
2.Pop
3.Display
4.exit
3
13
14
Enter
1.Push
2.Pop
3.Display
4.exit
4

 */
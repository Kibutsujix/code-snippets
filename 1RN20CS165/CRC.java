import java.util.Scanner;
import java.util.Arrays;

class CRC{
    static void println(Object line){
        System.out.println(line);
    }
    static void print(Object line){
        System.out.print(line);
    }
    static int[] generate_crc(int arr[],int gen[]){
        int current = 0;
        while(true){
            for(int i=0;i<gen.length;i++){
                arr[current+i] = arr[current+i] ^ gen[i];
            }
            while(arr[current]==0 && current!=arr.length-1){
                current++;
            }
            if(arr.length-current < gen.length)
                break;
        }
        return arr;
    }
    static int[] toIntarray(String arr[]){
        int intArr[] = new int[arr.length];
        for(int i=0;i<arr.length;i++)
        {
            intArr[i] = Integer.parseInt(arr[i]);
        }
        return intArr;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        print("Enter the message : ");
        int message[] = toIntarray((sc.next()).split(""));
        print("Enter the polynomial generator : ");
        int gen[] = toIntarray((sc.next()).split(""));
        int transdata[] = new int[message.length + gen.length-1];
        int appendmsg[] = Arrays.copyOf(message, message.length + gen.length-1);
        int rem[] = generate_crc(appendmsg.clone(),gen);
        for(int i=0;i < appendmsg.length;i++){
            transdata[i] = appendmsg[i] ^ rem[i];
        }
        println("transmitted data : ");
        for(int x : transdata){
            print(x);
        }
        println("");
        print("Enter received message : ");
        int user_input[] = toIntarray((sc.next()).split(""));
        rem = generate_crc(user_input, gen);
        for(int i=0;i<rem.length;i++){
            if(rem[i] !=0){
                println("Error found!");
                return;
            }
        }
        println("No errors found.");
        sc.close();
    }
}
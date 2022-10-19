import java.util.Arrays;
import java.util.Scanner;

import com.sun.javafx.scene.control.skin.IntegerFieldSkin;

import java.math.*;
class checksum{
    static void println(Object line){
        System.out.println(line);
    }
    static void print(Object line){
        System.out.print(line);
    }
    static int bintodec(int bin[]){
        int dec=0;
        for(int i=bin.length-1;i>=0;i--){
            dec += bin[i]*Math.pow(2, bin.length-i-1);
        }
        return dec;
    }
    static String dectobin(int num){
        return Integer.toBinaryString(num);
    }
    static int[] simulate_checksum(int arr[]){
        int chsum[] = new int[arr.length+1];
        
        return chsum;
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
        int sum=0;
        print("Enter number of packets : ");
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            sum += sc.nextInt();
        }
        int ch[] = toIntarray(dectobin(sum).split(""));
        simulate_checksum(ch);
        println("Sum : "+sum);
        println("ch : "+ch);
        /*int data[] = new int[chsum.length];
        print("Enter received data : ");
        for(int i=0;i<data.length;i++)
        {
            data[i] = sc.nextInt();
        }
        */
        
        sc.close();
    }
}
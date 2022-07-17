import java.util.Scanner;
public class heapsort {
    static void println(Object line){
        System.out.println(line);
    }
    static void print(Object line){
        System.out.print(line);
    }
    static void create_heap(int n,int heap[]){
        for(int i=n/2;i>=1;i--){
            int k = i;
            int v = heap[k];
            boolean hp = false;
            while((hp != true) && ((2*k) < n)){
                int j = 2*k;
                if(j<n){
                    if(heap[j] < heap[j+1]){
                        j+=1;
                    }
                }
                if(v >= heap[j]){
                    hp = true;
                }
                else{
                    heap[k] = heap[j];
                    k = j;
                }
            }
            heap[k] = v;
        }
    }
    static void heapify(int heap[], int n, int i)
    {
        int largest = i; 
        int l = 2 * i + 1; 
        int r = 2 * i + 2; 
        if (l < n && heap[l] > heap[largest])
            largest = l;
        if (r < n && heap[r] > heap[largest])
            largest = r;
    
        if (largest != i) {
            int temp = heap[i];
            heap[i] = heap[largest];
            heap[largest] = temp;
            heapify(heap, n, largest);
        }
    }
    static void heap_sort(int n,int heap[]){
        for(int i=(n/2 -1);i>=0;i--){
            heapify(heap, n, i);
        }
        for(int i = n-1;i>0;i--){
            int temp = heap[0];
            heap[0] = heap[i];
            heap[i] = temp;
            heapify(heap, i, 0);
        }
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        print("Enter number of objects : ");
        int n = scan.nextInt();
        println("Enter Key elements : ");
        int []heap = new int[n];
        for(int i=0;i<n;i++){
            heap[i] = scan.nextInt();
        }
        heap_sort(n, heap);
        println("Heap sort : ");
        for(int i=0;i<n-1;i++){
            print(""+heap[i]+", ");
        }
        println(""+heap[n-1]);
        scan.close();
    }
}

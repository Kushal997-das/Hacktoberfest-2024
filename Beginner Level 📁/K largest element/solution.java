
import java.util.*;

public class solution {

    public static void KlargestElemnts(int[]arr,int k){
        int N=arr.length;
        PriorityQueue<Integer> pq = new PriorityQueue<>();
         
        for(int i=0;i<N;i++){
        pq.add(arr[i]);
         if(pq.size()>k){
            pq.poll();
         }

        }

        while(!pq.isEmpty()){
            System.out.println(pq.peek()+"");
            pq.poll();
        }
    }
    public static void main(String[] args) {
        int[]arrar={1,22,33,42,12,45,3,0};
        KlargestElemnts(arrar, 4);
    }
}

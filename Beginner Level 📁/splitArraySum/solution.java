import java.util.Arrays;
import java.util.Scanner;

public class splitArraySum {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the size of the array and value of m");
        int n = in.nextInt(), m = in.nextInt();
        int [] arr = new int[n];
        System.out.println("Enter the array numbers");
        for (int i = 0; i < n; i++){
            arr[i] = in.nextInt();
        }
        System.out.println(splitArray(arr, m));
    }

    static int splitArray(int[] nums, int m){
        int ans = bSearch(nums, m);
        if (m == nums.length){
            return Arrays.stream(nums).max().getAsInt();
        }
        if(m == 1)
            return sumOfArray(nums);
        return  ans;
    }

    static int bSearch(int[] nums, int m){
        int end = sumOfArray(nums);
        int start = maxElement(nums);
        while(start < end){
            int mid = start + (end-start) / 2, sum = 0,numOfSubArrays = 1;
            for (int i = 0; i < nums.length; i++) {
                if(sum + nums[i] <= mid){
                    sum+= nums[i];
                }
                else{
                    numOfSubArrays++;
                    sum = nums[i];
                }
            }
            if(numOfSubArrays <= m)
                end = mid;
            else
                start = mid + 1;
        }
        return end;
    }

    static int sumOfArray(int[] nums){
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum = sum + nums[i];
        }
        return sum;
    }

    static int maxElement(int[] nums){
        int max = Arrays.stream(nums).max().getAsInt();
        return max;
    }

}

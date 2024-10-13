import java.util.Arrays;
import java.util.PriorityQueue;

public class Solution {
    public static int minGroups(int[][] intervals) {
        // Sort intervals based on the start time
        Arrays.sort(intervals, (a, b) -> a[0] - b[0]);

        // Min-heap to track the end times of the current groups
        PriorityQueue<Integer> pq = new PriorityQueue<>();

        for (int[] interval : intervals) {
            int start = interval[0], end = interval[1];

            // If the earliest ending interval is not overlapping with the current interval
            if (!pq.isEmpty() && pq.peek() < start) {
                pq.poll(); // Remove it from the heap
            }

            // Add the current interval's end time to the heap
            pq.add(end);
        }

        // The size of the heap is the number of groups required
        return pq.size();
    }

    public static void main(String[] args) {
        int[][] intervals = {{5, 10}, {6, 8}, {1, 5}, {2, 3}, {1, 10}};
        System.out.println(minGroups(intervals)); // Output: 3
    }
}

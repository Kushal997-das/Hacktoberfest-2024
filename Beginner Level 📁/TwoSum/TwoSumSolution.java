import java.util.HashMap;
import java.util.Scanner;

public class TwoSumSolution {

    // Function to return the indices of two numbers that add up to the target
    public static int[] twoSum(int[] nums, int target) {
        // Create a HashMap to store numbers and their indices
        HashMap<Integer, Integer> map = new HashMap<>();

        // Iterate through the array
        for (int i = 0; i < nums.length; i++) {
            // Calculate the complement (the number needed to reach the target)
            int complement = target - nums[i];

            // Check if the complement is already in the map
            if (map.containsKey(complement)) {
                // If found, return the indices of the two numbers
                return new int[] { map.get(complement), i };
            }

            // If complement is not found, store the current number with its index
            map.put(nums[i], i);
        }

        // Return an empty array if no solution is found (not expected due to constraints)
        return new int[] {};
    }

    // Main function to take input and test the code
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input the size of the array
        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();

        // Declare the array
        int[] nums = new int[n];

        // Input the elements of the array
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }

        // Input the target sum
        System.out.print("Enter the target sum: ");
        int target = scanner.nextInt();

        // Call the twoSum function and store the result
        int[] result = twoSum(nums, target);

        // Print the result (indices of the two numbers)
        if (result.length == 2) {
            System.out.println("Indices: " + result[0] + ", " + result[1]);
        } else {
            System.out.println("No solution found.");
        }

        // Close the scanner
        scanner.close();
    }
}

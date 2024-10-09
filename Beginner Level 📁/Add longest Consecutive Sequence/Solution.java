import java.util.HashSet;

public class Solution {
    
    // Method to find the length of the longest consecutive sequence
    public static int findLongestConsecutiveSequence(int[] nums) {
        // Create a HashSet to store unique elements from the array
        HashSet<Integer> numSet = new HashSet<>();
        
        // Add all elements of the array to the HashSet
        for (int num : nums) {
            numSet.add(num);
        }
        
        int longestStreak = 0; // Variable to keep track of the longest streak

        // Iterate through each number in the HashSet
        for (int num : numSet) {
            // Check if it's the start of a consecutive sequence
            if (!numSet.contains(num - 1)) {
                int currentNum = num; // Start with the current number
                int currentStreak = 1; // Initialize current streak length
                
                // Check for consecutive numbers in the sequence
                while (numSet.contains(currentNum + 1)) {
                    currentNum++; // Move to the next number
                    currentStreak++; // Increment the streak length
                }
                
                // Update longest streak if the current one is longer
                longestStreak = Math.max(longestStreak, currentStreak);
            }
        }

        // Return the length of the longest consecutive sequence found
        return longestStreak;
    }
    
    // Main method to test the findLongestConsecutiveSequence function
    public static void main(String[] args) {
        // Sample array of integers
        int[] nums = {100, 4, 200, 1, 3, 2};
        
        // Call findLongestConsecutiveSequence and store the result
        int longestSequence = findLongestConsecutiveSequence(nums);
        
        // Print the result
        System.out.println("The length of the longest consecutive sequence is: " + longestSequence); // Expected output: 4
    }
}

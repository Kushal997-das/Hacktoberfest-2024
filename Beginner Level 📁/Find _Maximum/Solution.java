public class Solution {
    
    // Method to find the maximum number in an array
    public static int findMax(int[] numbers) {
        // Initialize max to the first element in the array
        int max = numbers[0];

        // Loop through each number in the array starting from the second element
        for (int i = 1; i < numbers.length; i++) {
            // If the current number is greater than max, update max
            if (numbers[i] > max) {
                max = numbers[i];
            }
        }

        // Return the maximum number found
        return max;
    }
    
    // Main method to test the findMax function
    public static void main(String[] args) {
        // Sample array of integers
        int[] numbers = {3, 5, 7, 2, 8};
        
        // Call findMax and store the result
        int maxNumber = findMax(numbers);
        
        // Print the result
        System.out.println("The maximum number is: " + maxNumber); // Expected output: 8
    }
}

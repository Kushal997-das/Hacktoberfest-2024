import java.util.*;

public class Solution {

    static boolean isAnagram(String a, String b) {
        // Convert both strings to lowercase to ensure case insensitivity
        a = a.toLowerCase();
        b = b.toLowerCase();
        
        // If lengths are not the same, they cannot be anagrams
        if (a.length() != b.length()) {
            return false;
        }

        // Convert strings to char arrays and sort them
        char[] arrA = a.toCharArray();
        char[] arrB = b.toCharArray();
        
        Arrays.sort(arrA);
        Arrays.sort(arrB);
        
        // Compare sorted arrays
        return Arrays.equals(arrA, arrB);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Input the two strings
        String a = scanner.nextLine();
        String b = scanner.nextLine();
        
        // Call the isAnagram function and print the result
        boolean result = isAnagram(a, b);
        if (result) {
            System.out.println("Anagrams");
        } else {
            System.out.println("Not Anagrams");
        }
        
        scanner.close();
    }
}

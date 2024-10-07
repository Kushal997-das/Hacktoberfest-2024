import java.util.Arrays;
import java.util.Scanner;

public class AnagramChecker {

    // Function to check if two strings are anagrams
    public static boolean areAnagrams(String str1, String str2) {
        // If lengths are not equal, they can't be anagrams
        if (str1.length() != str2.length()) {
            return false;
        }

        // Convert both strings to character arrays
        char[] charArray1 = str1.toCharArray();
        char[] charArray2 = str2.toCharArray();

        // Sort both character arrays
        Arrays.sort(charArray1);
        Arrays.sort(charArray2);

        // Compare sorted arrays, if equal they are anagrams
        return Arrays.equals(charArray1, charArray2);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input first string
        System.out.print("Enter the first string: ");
        String str1 = scanner.nextLine();

        // Input second string
        System.out.print("Enter the second string: ");
        String str2 = scanner.nextLine();

        // Check if the strings are anagrams
        if (areAnagrams(str1, str2)) {
            System.out.println("The strings are anagrams.");
        } else {
            System.out.println("The strings are not anagrams.");
        }

        // Close the scanner to prevent resource leaks
        scanner.close();
    }
}

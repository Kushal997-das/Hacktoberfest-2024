import java.io.*;
public class PalindromeNumber {
    public static void main(String args[]) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
       System.out.print("Enter a number: ");
        int number = Integer.parseInt(reader.readLine());
        checkPalindrome(number);
    }

    public static void checkPalindrome(int number) {
        int original = number, reversed = 0;

        while (number > 0) {
            reversed = reversed * 10 + number % 10;
            number /= 10;
        }

        System.out.println(original + (original == reversed ? " is a palindrome." : " is not a palindrome."));
    }
}

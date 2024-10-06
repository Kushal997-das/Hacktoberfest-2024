import java.util.Arrays;
import java.util.Scanner;

class Solution {
    public boolean checkInclusion(String s1, String s2) {
        if (s1.length() > s2.length()) {
            return false;
        }
        
        if (s1.length() == 1 && s2.indexOf(s1) != -1) {
            return true;
        }

        int i = 0;
        int j = i + s1.length();
        char[] ori = s1.toCharArray();
        Arrays.sort(ori);

        while (j <= s2.length()) {
            char[] temp = s2.substring(i, j).toCharArray();
            Arrays.sort(temp);
            if (Arrays.equals(temp, ori)) {
                return true;
            }
            j += 1;
            i += 1;
        }

        return false;
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter string s1:");
        String s1 = sc.nextLine();

        System.out.println("Enter string s2:");
        String s2 = sc.nextLine();

        Solution solution = new Solution();
        boolean result = solution.checkInclusion(s1, s2);

        if (result) {
            System.out.println("s1 is a permutation of a substring of s2.");
        } else {
            System.out.println("s1 is not a permutation of any substring of s2.");
        }

        sc.close();
    }
}

#include <iostream>
#include <vector>
#include <algorithm> // for reverse
using namespace std;

class Solution {
public:
    // Main function to return the shortest palindrome
    string shortestPalindrome(string s) {
        // Reverse the input string 's' to help identify palindromic parts
        string reversed_s = string(s.rbegin(), s.rend());

        // Find the length of the longest palindromic prefix in 's' using KMP
        int palindrome_length = findLongestPalindromicPrefix(s, reversed_s);

        // The non-palindromic suffix is reversed and added to the front of 's'
        return reversed_s.substr(0, s.length() - palindrome_length) + s;
    }

private:
    // Helper function to find the length of the longest palindromic prefix using KMP
    int findLongestPalindromicPrefix(const string &s, const string &reversed_s) {
        // Concatenate original string, special character '#', and the reversed string
        string combined_string = s + "#" + reversed_s;

        // Create a vector for the KMP LPS (longest prefix suffix) array
        vector<int> lps(combined_string.length(), 0);

        // Compute the LPS array for the combined string
        int i = 1;  // Start from the second character
        int len = 0;  // Length of the previous longest prefix suffix

        // Fill the LPS array for the combined string
        while (i < combined_string.length()) {
            if (combined_string[i] == combined_string[len]) {
                // If characters match, increase the length of the matching prefix
                len++;
                lps[i] = len;
                i++;
            } else {
                // If characters don't match, fall back to the previous LPS value
                if (len > 0) {
                    len = lps[len - 1];
                } else {
                    // If no match, set LPS[i] to 0 and move to the next character
                    lps[i] = 0;
                    i++;
                }
            }
        }

        // The last value in the LPS array represents the longest palindromic prefix
        return lps.back();
    }
};

int main() {
    Solution solution;

    // Example 1
    string s1 = "aacecaaa";
    cout << "Shortest palindrome for '" << s1 << "': " << solution.shortestPalindrome(s1) << endl;

    // Example 2
    string s2 = "abcd";
    cout << "Shortest palindrome for '" << s2 << "': " << solution.shortestPalindrome(s2) << endl;

    return 0;
}

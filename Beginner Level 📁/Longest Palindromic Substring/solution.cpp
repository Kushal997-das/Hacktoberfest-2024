#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n < 2) return s;
        
        int start = 0, maxLen = 1;
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        
        // All substrings of length 1 are palindromes
        for (int i = 0; i < n; i++) {
            dp[i][i] = true;
        }
        
        // Check for substrings of length 2
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                start = i;
                maxLen = 2;
            }
        }
        
        // Check for lengths greater than 2
        for (int len = 3; len <= n; len++) {
            for (int i = 0; i < n - len + 1; i++) {
                int j = i + len - 1;
                if (dp[i + 1][j - 1] && s[i] == s[j]) {
                    dp[i][j] = true;
                    if (len > maxLen) {
                        start = i;
                        maxLen = len;
                    }
                }
            }
        }
        
        return s.substr(start, maxLen);
    }
};

int main() {
    Solution sol;
    vector<string> testCases = {"babad", "cbbd", "a", "ac", "racecar", "bananas"};
    
    for (const auto& test : testCases) {
        string result = sol.longestPalindrome(test);
        cout << "Input: " << test << endl;
        cout << "Longest palindromic substring: " << result << endl;
        cout << endl;
    }
    
    return 0;
}
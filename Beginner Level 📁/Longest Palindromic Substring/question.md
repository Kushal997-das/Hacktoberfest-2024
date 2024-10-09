# Longest Palindromic Substring

## Problem Statement

Given a string `s`, find the longest palindromic substring in `s`. You may assume that the maximum length of `s` is 1000.

## Definition

A palindrome is a string that reads the same backward as forward. For example, "aba" is a palindrome, while "abc" is not.

## Example 1:

Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.

## Example 2:

Input: s = "cbbd"
Output: "bb"

## Example 3:

Input: s = "a"
Output: "a"

## Example 4:

Input: s = "ac"
Output: "a"

## Constraints:

- 1 <= s.length <= 1000
- s consist of only digits and English letters (lower-case and/or upper-case)

## Follow up:

Can you solve it in O(n^2) time complexity?

## Approach:

This problem can be solved using dynamic programming. The idea is to maintain a table where dp[i][j] represents whether the substring from index i to j is a palindrome.

We can build this table bottom-up, starting with palindromes of length 1, then length 2, and so on. For each longer palindrome, we only need to check if the first and last characters match and if the inner substring is a palindrome.

## Complexity:

- Time Complexity: O(n^2), where n is the length of the string.
- Space Complexity: O(n^2) to maintain the dp table.

## Implementation:

An implementation of this solution in C++ is provided in the accompanying source file.
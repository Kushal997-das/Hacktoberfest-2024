Problem Statement:
You are given an array of integers where each element represents the maximum number of steps you can jump forward from that position. Your task is to determine the minimum number of jumps required to reach the end of the array (starting from the first element). If it is not possible to reach the end, return -1.

Example:
Input:
[2, 3, 1, 1, 4]
Output:
2
Explanation:

Jump 1 step from index 0 to 1 (value 3).
Then jump 3 steps to the last index (value 4).
Input:
[3, 2, 1, 0, 4]
Output:
-1
Explanation:
It is not possible to reach the last index.
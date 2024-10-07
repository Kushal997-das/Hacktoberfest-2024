
## Problem 2: Maximize the Total Height of Unique Towers

### Problem Description:
You are given an array `maximumHeight`, where `maximumHeight[i]` denotes the maximum height the i-th tower can be assigned.

Your task is to assign a height to each tower such that:
1. The height of the i-th tower is a positive integer and does not exceed `maximumHeight[i]`.
2. No two towers have the same height.

Return the maximum possible total sum of the tower heights. If it's not possible to assign unique heights to all towers, return `-1`.

### Input:
- An array of integers `maximumHeight`.

### Output:
- An integer representing the maximum possible total sum of the tower heights, or `-1` if it's not possible to assign unique heights.

### Example:

#### Example 1:
Input: maximumHeight = [2, 3, 4, 3] Output: 10 Explanation: We can assign heights in the following way: [1, 2, 4, 3]. The total sum is 1 + 2 + 4 + 3 = 10.

#### Example 2:
Input: maximumHeight = [2, 2, 1] Output: -1 Explanation: It is impossible to assign positive heights to each tower such that no two towers have the same height.


### Constraints:
- `1 <= maximumHeight.length <= 10^5`
- `1 <= maximumHeight[i] <= 10^9`

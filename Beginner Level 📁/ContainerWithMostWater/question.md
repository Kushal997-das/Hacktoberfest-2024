# Container With Most Water

## Problem Statement
You are given `n` non-negative integers `a1, a2, ..., an`, where each represents a point at coordinate `(i, ai)`. `n` vertical lines are drawn such that the two endpoints of the line `i` are at `(i, ai)` and `(i, 0)`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

## Task
Write a function that takes an array of integers as input and returns the maximum area of water a container can hold.

### Function Signature
```cpp
int maxArea(vector<int>& height);
```

### Example
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The two lines at indices 1 (height=8) and 8 (height=7) can form a container with the most water. 
The area of the container is (8 - 1) * min(8, 7) = 49.

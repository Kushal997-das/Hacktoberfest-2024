# Problem: Merge Sort Algorithm

### Problem Statement

You are given an array of `N` integers. Your task is to implement the **Merge Sort** algorithm to sort the array in ascending order.

The merge sort algorithm follows the divide-and-conquer approach by recursively dividing the array into two halves until it can no longer be divided, and then merging those halves in a sorted manner. Your goal is to implement this algorithm efficiently to handle large input sizes.

### Input

- The first line of the input contains a single integer `N`, the size of the array.
- The second line contains `N` space-separated integers representing the elements of the array `arr[]`.

### Output

- Output a single line with the elements of the array sorted in non-decreasing order.

### Example

#### Input:

- N = 10
- arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}

### Output:

1 2 3 4 5 6 7 8 9 10

### Constraints

- \( 1 \leq N \leq 10^5 \)
- \( 1 \leq arr[i] \leq 10^5 \)

### Notes

- You need to ensure that the algorithm is efficient enough to handle the upper limits of the input size within the given constraints.
- The time complexity of Merge Sort is \( O(N \log N) \), which makes it suitable for sorting large arrays as required in this problem.

### Detailed Explanation

In Merge Sort, the array is recursively divided into two halves, and the two halves are sorted and merged together. The base case for the recursion occurs when the array cannot be divided further (i.e., when the size of the subarray is 1).

Make sure to implement both the **divide** step (splitting the array) and the **conquer** step (merging the sorted halves) correctly to achieve the desired output.

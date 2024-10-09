### Grid Maximum Path Sum

You are given a 2D grid of size `m x n` containing non-negative integers. You need to find a path from the top-left corner to the bottom-right corner that maximizes the sum of all the numbers along its path. You can only move either right or down at any point in time.

#### Input:

- The first line contains two integers `m` and `n` representing the number of rows and columns in the grid, respectively.
- The next `m` lines contain `n` integers each, representing the grid values.

#### Output:

- Output a single integer representing the maximum sum that can be obtained by following a path from the top-left to the bottom-right of the grid.

#### Constraints:

- `1 <= m, n <= 100`
- `0 <= grid[i][j] <= 1000`

#### Example:

**Input:**

```
3 3
1 3 1
1 5 1
4 2 1
```

**Output:**

```
12
```

**Explanation:**

The path with the maximum sum is: `1 → 3 → 5 → 2 → 1`, resulting in a total sum of 12.
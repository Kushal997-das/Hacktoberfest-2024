
# Candy Distribution Problem

## Problem Description

There are **N** children standing in a line. Each child has a rating given in an array **ratings** where **ratings[i]** represents the rating of the **i-th** child. You have **N** candies, and you want to distribute them as follows:
- Every child must get at least one candy.
- Children with a higher rating than their adjacent children should get more candies than their neighbors.

Find the minimum number of candies required to distribute them according to these rules.

### Input:
- An integer **N** (1 ≤ N ≤ 10^5) representing the number of children.
- An array **ratings** of size **N** where **ratings[i]** (1 ≤ ratings[i] ≤ 10^4) represents the rating of the **i-th** child.

### Output:
- An integer representing the minimum number of candies required.

### Example:

#### Input:
```
N = 5
ratings = [1, 2, 2, 1, 3]
```

#### Output:
```
7
```

### Explanation:
- Child 1 gets 1 candy (since there is no left neighbor).
- Child 2 gets 2 candies (higher rating than child 1).
- Child 3 gets 1 candy (equal rating to child 2, so no more than child 2).
- Child 4 gets 1 candy (lower rating than child 3).
- Child 5 gets 2 candies (higher rating than child 4).
So, the total number of candies = 1 + 2 + 1 + 1 + 2 = 7.
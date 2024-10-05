# Weighted Subset Sum with Constraints

## Problem Statement

You are given `n` items, each with a weight `w[i]`, value `v[i]`, and constraints on how they can be selected. The goal is to choose a subset of these items such that:

- The total weight is less than or equal to a given limit `W`.
- The total number of items selected is less than or equal to `K`.
- Certain items must be selected together (group constraints).
- Certain items cannot be selected together (exclusive constraints).

Your task is to find the maximum possible value that can be obtained from the selected subset of items.

## Input

- `n`: The number of items.
- `w[]`: An array of size `n` representing the weights of the items.
- `v[]`: An array of size `n` representing the values of the items.
- `W`: The maximum allowable weight for the subset of items.
- `K`: The maximum allowable number of items that can be selected.
- `Must-pair`: A list of pairs of item indices that must be selected together (if one is picked, the other must also be picked).
- `Cannot-pair`: A list of pairs of item indices that cannot be selected together (only one of the pair can be picked).

## Output

- The maximum value that can be obtained from the selected subset of items.
- A list of the indices of the selected items.

## Example

### Input:

n = 5
w = [2, 3, 4, 5, 1]
v = [3, 4, 5, 8, 1]
W = 10
K = 3
Must-pair = [(0, 1)]
Cannot-pair = [(2, 3)]

### Output:
Maximum value: 9
Selected items: [0, 1, 4]

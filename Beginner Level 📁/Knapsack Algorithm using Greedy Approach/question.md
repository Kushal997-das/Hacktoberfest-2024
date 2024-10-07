# Knapsack Algorithm using Greedy Approach

## Description

The task is to implement the **Knapsack Algorithm (Fractional Knapsack)** using a greedy approach. This problem involves maximizing the total value in a knapsack given weights and values of items, subject to a weight capacity.

## Problem Statement

You are given a set of `n` items, each with a weight `w[i]` and value `v[i]`. The goal is to fill a knapsack of capacity `W` such that the total value is maximized. In the greedy approach, we can take fractions of an item if necessary.

- **Input**:
  - `n`: Number of items.
  - `W`: Capacity of the knapsack.
  - `w[]`: An array representing the weights of the `n` items.
  - `v[]`: An array representing the values of the `n` items.

- **Output**:
  - Maximum possible value of the items in the knapsack.

## Greedy Strategy

- Sort items by their value-to-weight ratio (`v[i]/w[i]`) in descending order.
- Start filling the knapsack from the item with the highest value-to-weight ratio.
- If the item can be fully added, add it to the knapsack.
- If it cannot be fully added, add as much of it as possible (fractional amount) to maximize the value.





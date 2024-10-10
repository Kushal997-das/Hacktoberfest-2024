**Problem: Count the Number of Ways to Complete the Game**

You are playing a game with `n` levels connected by `m` teleporters, and your task is to get from level 1 to level `n`. The game is designed such that the underlying graph has no directed cycles (i.e., it is a Directed Acyclic Graph, or DAG).

Your objective is to calculate how many distinct ways you can complete the game by traveling from level 1 to level `n`.

### Input

- The first input line contains two integers, `n` (1 ≤ n ≤ 10^5) and `m` (1 ≤ m ≤ 2 × 10^5): 
  - `n`: the number of levels.
  - `m`: the number of teleporters.
- The following `m` lines describe the teleporters, where each line contains two integers `a` and `b` (1 ≤ a, b ≤ n), indicating there is a teleporter from level `a` to level `b`.

### Output

- Print one integer: the number of distinct ways to travel from level 1 to level `n`. Since the result may be large, output the result modulo 10^9 + 7.

### Constraints

- The graph has no directed cycles.
- 1 ≤ n ≤ 100,000
- 1 ≤ m ≤ 200,000

### Example

**Input**
```
5 5
1 2
1 3
2 4
3 4
4 5
```

**Output**
```
2
```

### Explanation

In this example, there are two ways to go from level 1 to level 5:
1. 1 → 2 → 4 → 5
2. 1 → 3 → 4 → 5

---

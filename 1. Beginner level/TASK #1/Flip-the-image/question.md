# LeetCode Question

## 832 (easy)

**[Flipping an Image](https://leetcode.com/problems/flipping-an-image/)**

Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.

1. To flip an image horizontally means that each row of the image is reversed.

- For example, flipping [1,1,0] horizontally results in [0,1,1].

2. To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.

- For example, inverting [0,1,1] results in [1,0,0].

1. **Input**: image = [[1,1,0],[1,0,1],[0,0,0]]
2. **Output**: [[1,0,0],[0,1,0],[1,1,1]]
3. **Explanation**: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
   Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]

# Transpose Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a 2D integer array `matrix`, return  *the  **transpose**  of*  `matrix`.

The  **transpose**  of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

 

Original
C
 **Example 1:** 

```
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]

```

 **Example 2:** 

```
Input: matrix = [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 1000
- 1 <= m * n <= 105
- -109 <= matrix[i][j] <= 109

## Solution

**Language:** C  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15.8 MB (beats 65.18%)  
**Submitted:** 2026-11-25T16:20:24.658Z  

```c
/**
 * Return an array of arrays.
 * The sizes of the arrays are returned in
 * *returnColumnSizes.
 * The number of rows is returned in *returnSize.
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    
    int m = matrixSize;
    int n = matrixColSize[0];

    int** result = (int**)malloc(n * sizeof(int*));
    *returnColumnSizes = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        result[i] = (int*)malloc(m * sizeof(int));
        (*returnColumnSizes)[i] = m;

        for (int j = 0; j < m; j++) {
            result[i][j] = matrix[j][i];
        }
    }

    *returnSize = n;

    return result;
}
```

---

[View on LeetCode](https://leetcode.com/problems/transpose-matrix/)
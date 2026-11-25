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
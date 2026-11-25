/**
 * Return an array of arrays.
 * The sizes of the arrays are returned in
 * *returnColumnSizes.
 * The number of rows is returned in *returnSize.
 */
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {

    int m = matSize;
    int n = matColSize[0];

    // Check whether reshaping is possible
    if (m * n != r * c) {
        *returnSize = m;
        *returnColumnSizes = (int*)malloc(m * sizeof(int));

        for (int i = 0; i < m; i++) {
            (*returnColumnSizes)[i] = n;
        }

        return mat;
    }

    int** result = (int**)malloc(r * sizeof(int*));
    *returnColumnSizes = (int*)malloc(r * sizeof(int));

    for (int i = 0; i < r; i++) {
        result[i] = (int*)malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;
    }

    for (int i = 0; i < m * n; i++) {
        result[i / c][i % c] = mat[i / n][i % n];
    }

    *returnSize = r;

    return result;
}
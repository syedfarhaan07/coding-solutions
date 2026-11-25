/**
 * Note: The returned array must be malloced,
 * assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));

    int sum = 0;

    for (int i = 0; i < numsSize; i++) {
        sum = sum + nums[i];
        result[i] = sum;
    }

    *returnSize = numsSize;

    return result;
}
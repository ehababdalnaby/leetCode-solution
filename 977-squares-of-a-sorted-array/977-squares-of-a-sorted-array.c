

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int *result = (int *)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    int *start = nums,*end = nums + numsSize - 1;
    int i = numsSize - 1;
    while(start <= end)
    {
        if(abs(*start) > abs(*end))
        {
            result[i--] = (*start) * (*start);
            start++;
        }
        else
        {
            result[i--] = (*end) * (*end);
            end--;
        }
    }
    return result;
}




/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int *result = (int *)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    int start = 0,end = numsSize - 1;
    int i = numsSize - 1;
    while(start <= end)
    {
        //nums[start]=nums[start] > 0 ?  nums[start] : nums[start] * -1;
        //nums[end]=nums[end] > 0 ?  nums[end] : nums[end] * -1;
        if(abs(nums[start]) > abs(nums[end]))
        {
            result[i--] = nums[start] * nums[start];
            start++;
        }
        else
        {
            result[i--] = nums[end] * nums[end];
            end--;
        }
    }
    return result;
}


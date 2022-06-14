

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){

    *returnSize = 2;
    int *result = (int *)malloc(2 * sizeof(int));
    int start = 0, end = numsSize - 1;
    while(start <= end)
    {
        if(nums[start] == target && nums[end] == target)
        {
            result[0] = start;
            result[1] = end;
            return result;
        }
        if(nums[start] != target)
        {
            start++;
        }
        if(nums[end] != target)
        {
            end--;
        }
        
       
        
    }
            result[0] = -1;
            result[1] = -1;
    return result;
}


int singleNumber(int* nums, int numsSize){
    int unique = nums[0];
    for(int i = 1; i < numsSize;i++)
    {
        unique^=nums[i];
    }
    return unique;
}
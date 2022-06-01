

void moveZeroes(int* nums, int numsSize){
    int currentIndex = 0;
    if(numsSize <=1)
    {
        return;
    }
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i]!=0)
        {
            nums[currentIndex] = nums[i];
            if(i!=currentIndex)
            nums[i] = 0;
            currentIndex++;
        }
    }
}
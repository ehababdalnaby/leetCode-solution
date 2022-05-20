

int searchInsert(int* nums, int numsSize, int target){
    int start = 0, end = numsSize - 1, middle = 0;
    while(start <= end)
    {
        middle = start +(end - start)/2;
        if(target == nums[middle])
            return middle;
        if(target > nums[middle])
            start = middle +1;
        else 
            end = middle - 1;
    }
    

    return start;
    
    
}
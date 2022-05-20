

int search(int* nums, int numsSize, int target){
    int start=0, middle=0, end=numsSize-1;
        
        while(start<=end){
            middle=start+(end-start)/2;
            if(nums[middle]==target)
                return middle;
            else if(nums[middle]>target)
                end = middle-1;
            else
                start = middle+1;
        }
        return -1;
}
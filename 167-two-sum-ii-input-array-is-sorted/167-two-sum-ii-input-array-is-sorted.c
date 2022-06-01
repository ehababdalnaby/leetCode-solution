

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    *returnSize = 2;
    int *result = (int *)malloc((*returnSize)*sizeof(int));
    int l = 0,r = numbersSize -1;
    int sum;
    while(l < r)
    {
        sum = numbers[l] + numbers[r];
         if(sum > target)
         {
             r--;
         }
        else if(sum < target)
         {
             l++;
         }
        else
        {
            result[0] = l+1;
            result[1] = r+1;
            break;
        }
        
    }
    
    
    return result;
}
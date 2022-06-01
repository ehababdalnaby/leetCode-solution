

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int *result = (int *)malloc(2*sizeof(int));
    *returnSize = 2;
    int l = 0,r = numbersSize -1;
    while(l < r)
    {
         if(numbers[l] + numbers[r] > target)
         {
             r--;
         }
        else if(numbers[l] + numbers[r] < target)
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
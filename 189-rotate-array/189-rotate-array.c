

void reverse(int l,int r,int* nums)
{
    int temp;
    for(;l<r;l++,r--)
    {
        temp = nums[l];
        nums[l] = nums[r];
        nums[r] = temp;
    }
}

//Tot rotate the array k times this happened by shifting the last k elements to the left and the remaning n-k elements to the right
//this happened by three steps :
/*
  1.reverse the whole array
  2.reverse the first k elements
  3.reverse the remaning n-k elements
*/



void rotate(int* nums, int numsSize, int k){
    k=k%numsSize;
    if(k==0 || numsSize == 1)
        return;
   reverse(0,numsSize-1,nums);    //reverse the whole array
   reverse(0,k-1,nums);          // reverse the first k elements
   reverse(k,numsSize-1,nums);   //reverse the remaning n-k elements
}
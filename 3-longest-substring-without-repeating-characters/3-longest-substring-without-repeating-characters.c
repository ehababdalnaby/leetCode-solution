

int lengthOfLongestSubstring(char * s){
    char arr[128] = {0};
    int longestCount = 0;
    int currentCount = 0;
    int iterate = 0;
    int i = 0,k = 0;
    if(strlen(s)==1)
    {
        return 1;
    }
    while(s[i] != '\0')
    {
        if(arr[s[i]] < 1)
        {
             arr[s[i]]++;
            i++;
            currentCount++;
        }
        else
        {
             memset(arr,0,128);
            k++;
            iterate++;
            currentCount = 0;
           i=k;
        }
         if(currentCount > longestCount)
            longestCount = currentCount;
            
       
    }
    
    return longestCount;
}
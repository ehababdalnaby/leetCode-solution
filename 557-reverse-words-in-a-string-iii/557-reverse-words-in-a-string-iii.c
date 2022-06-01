void reverseString(char* s, int start,int end){
    
   while(start <  end)
    {
        s[start] = s[start] + s[end];
        s[end] = s[start] - s[end];
        s[start] = s[start] - s[end];
       start++;
       end--;
        
    }
   // printf("%d %d\n",start,end);
}

char * reverseWords(char * s){
     int endOfS= 0;
     int startOfWord= 0;
    
    while(s[endOfS] != '\0')
    {
        if(s[endOfS] == ' ')
        {
            reverseString(s,startOfWord,endOfS-1);
           startOfWord = endOfS+1; 
        }
            endOfS++;
    }
            reverseString(s,startOfWord,endOfS-1);
    return s;
}
void reverseString(char* s, int start,int end){
    for(int i=start;i<=(start+end)/2;i++){
        char temp = s[i];
        s[i] = s[end-(i-start)];
        s[end-(i-start)] = temp;
    }
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
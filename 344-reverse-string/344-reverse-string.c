

void reverseString(char* s, int sSize){
    int end = sSize -1;
    for(int start = 0; start < sSize/2; start++)
    {
        s[start] = s[start] + s[end - start];
        s[end - start] = s[start] - s[end - start];
        s[start] = s[start] - s[end - start];
    }
}
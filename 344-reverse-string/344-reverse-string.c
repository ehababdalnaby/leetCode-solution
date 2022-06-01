

void reverseString(char* s, int sSize){
    int end = sSize -1;
    char temp;
    for(int start = 0; start < sSize/2; start++)
    {
        temp = s[start];
        s[start] = s[end - start];
        s[end - start] = temp;
    }
}
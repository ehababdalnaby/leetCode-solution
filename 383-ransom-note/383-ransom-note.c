

bool canConstruct(char * ransomNote, char * magazine){
    int letters[26] ={0};
    int i = 0;
    while(magazine[i] != '\0')
    {
        letters[magazine[i]-'a']++;
        i++;
    }
    i=0;
    while(ransomNote[i] != '\0')
    {
        if(letters[ransomNote[i] - 'a'] > 0)
        {
            letters[ransomNote[i] - 'a']--;
        }
        else
            return false;
       
        i++;
    }
    return true;
}
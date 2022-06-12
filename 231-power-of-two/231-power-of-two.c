

bool isPowerOfTwo(int n){
    if(n<=0)
    {
        return false;
    }
    bool result = true;
    char count = 0;
    while(n)
    {
        if(n & 0x01)
        {
            count++;
        }
        if(count > 1)
        {
            return false;
        }
        n = n >> 1; 
    }
    return result;
}
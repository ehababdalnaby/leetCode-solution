int hammingWeight(uint32_t n) {
     char count = 0;
    while(n)
    {
        if(n & 0x01)
        {
            count++;
        }
       
        n = n >> 1; 
    }
    return count;
}
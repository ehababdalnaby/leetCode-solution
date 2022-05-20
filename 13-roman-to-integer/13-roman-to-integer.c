#define SIZE 7

int hash_algorithm(char ch)
{
    switch(ch)
    {
        case 'I': return 0; break;
        case 'V': return 1; break;
        case 'X': return 2; break;
        case 'L': return 3; break;
        case 'C': return 4; break;
        case 'D': return 5; break;
        case 'M': return 6; break;
        default: return 0;
    }
}

int romanToInt(char * s){
    char symbols[SIZE] = {'I','V','X','L','C','D','M'};
    int values[SIZE] = {1,5,10,50,100,500,1000};
    int total = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(values[hash_algorithm(s[i])] < values[hash_algorithm(s[i+1])])
        {
            total = total + values[hash_algorithm(s[i+1])] - values[hash_algorithm(s[i])];
            i++;
        }else
        {
            total = total + values[hash_algorithm(s[i])];
        }
    }
    return total;
}
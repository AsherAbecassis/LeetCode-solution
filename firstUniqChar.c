


int firstUniqChar(char * s){
    
    int temp[26]={0};
    int n=(int)strlen(s);
    char c;
    for(int i=0;i<n;i++)
    {
        temp[s[i] -'a']++;
    }
    for(int i=0;i<n;i++)
    {
        if (temp[s[i]- 'a']==1) {
            return i;
        }
    }
    
    
    return -1;
    
    
    
}

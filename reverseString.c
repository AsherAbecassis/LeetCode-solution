



void swap(char *v, char *u)
{
    char temp;
    temp = *v;
    *v = *u;
    *u = temp;
}

void reverseString(char* s, int sSize){

    int i=0;
    int j=sSize-1;
  
    while (i<j) {
        swap(&s[i], &s[j]);
        i++;
        j--;
        
        
    }
    
    
    
}

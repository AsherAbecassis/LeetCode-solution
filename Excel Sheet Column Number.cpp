


class Solution {
public:
    
int titleToNumber(string s) {

    int sum=(s[0]-65 ) +1 ;
    for(int i=1;i<s.size();i++)
    {
        sum=sum + ( 25 *(sum) );
        sum=sum+( s[i]- 65 ) +1 ;

    }
    return sum;
}



};

//Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.


class Solution {
public:
    int getSum(int a, int b) {
            int sum;
    
    while (b!=0) {
        
        sum=a^b;
        b=(unsigned) (a&b) <<1;
        a=sum;
        
    }
    
    return sum;
    
    }
};

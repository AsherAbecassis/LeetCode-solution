



class Solution {
public:
int maxCoins(vector<int>& piles) {
   
    
    
    sort(piles.begin(),piles.end());
    
    int j=0;
    int i= piles.size()-1;
    int sum=0;
    
    
    while (i>=j) {
        
        
        sum+=piles[i-1];
        
        j++;
        i=i-2;
        
    }
    
    return sum;
}
    
};

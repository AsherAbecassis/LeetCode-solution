

//In a deck of cards, each card has an integer written on it.

//Return true if and only if you can choose X >= 2 such that it is possible to split the entire deck into 1 or more groups of cards, where:

//Each group has exactly X cards.
//All the cards in each group have the same integer




class Solution {
public:



bool gcd(int small,int big)
{
    
    for(int i=2;i<=small;i++)
    {
        if(small % i==0 && big% i==0)
        {
            return true;
        }
        
    }
    return false;
}

bool hasGroupsSizeX(vector<int>& deck) {
    
    if(deck.size()<2)
    {
        return false;
    }
       
    unordered_map<int, int>m;
    vector<int> arr;
    int count=0;
    int min ;
    
    for(int i=0;i!=deck.size();i++)
    {
        m[deck[i]]++;
    }
    
    
    
    for(auto i=m.begin();i!=m.end();i++)
    {
        arr.push_back(i->second);
        count++;
    }
    sort(arr.begin(), arr.end());
    min=arr[0];
    if(min < 2)
    {
        return false;
    }
    
    for(int i=1;i<arr.size();i++)
    {
        if(!gcd(arr[i-1],arr[i]))
        {
            return false;
        }
        
    }

        
    return true;
    
}





};

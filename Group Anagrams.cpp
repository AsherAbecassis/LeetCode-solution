
//Given an array of strings strs, group the anagrams together. You can return the answer in any order.

//An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
            
    string s;
    
    
    vector<vector<string>> b;
    unordered_map<string, vector<string>> map;
    
    for(int i=0;i< a.size();i++)
    {
        s=a[i];
        
        sort(s.begin(),s.end());
        
        map[s].push_back(a[i]);
        
        
    }
    
    for (auto x: map)
        b.push_back(x.second);
        
    return b;
    }
};

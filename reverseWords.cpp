




class Solution {
public:
    string reverseWords(string s) {
          stack<string> sta;
    
    int size= (int )s.size();
    int i=0;
    string ans;
    int count =-1;
    while (i<size) {
      
      if(s[i] != ' ')
      {
          string a;
          while (s[i]!=' ' && i<size) {
              
              a=a+s[i];
              i++;
          }
          sta.push(a);
          count++;
      }
      else{
          i++;
      }
      
    }
    
    while (!sta.empty()) {
        ans=ans+sta.top();
       
        
        sta.pop();
        if(count>0)
        {
            ans+=' ';
            count--;
        }
        
        
    }
    
        
    
    
    
    return ans;
    
   
    }
};

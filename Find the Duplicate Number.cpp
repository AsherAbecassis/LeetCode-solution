
//Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

//There is only one repeated number in nums, return this repeated number




class Solution {
public:
   
int findDuplicate(vector<int>& nums) {

    //1 2 2 3 4
    
    int count=0;
    sort(nums.begin(), nums.end());
    
    set<int>s;
    
    for(int i=0;i<nums.size();i++)
    {
        s.insert(nums[i]);
    }
    for(int x: s)
    {
            if(x!=nums[count])
            {
                return nums[count];
            }
        count++;
    }
    
    return nums[count];
}


};

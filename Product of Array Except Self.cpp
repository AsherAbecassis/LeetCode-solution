//Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].






class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        
    vector<int> left(nums.size());
    vector<int> right(nums.size());

    left[0]=1;
    right[nums.size()-1]=1;


    for(int i=1;i<nums.size();i++)
    {
       left[i]=nums[i-1]*left[i-1];
    }

    for(int i=nums.size()-2;i>=0;i--)
    {
        right[i]=nums[i+1]*right[i+1];
    }

    for(int i=0;i<nums.size();i++)
    {
        nums[i]=right[i]*left[i];
    }
    return nums;


        
        
    }
};

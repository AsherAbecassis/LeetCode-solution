//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

//Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?




class Solution {
public:
    int singleNumber(vector<int>& nums) {

    sort(nums.begin(),nums.end());

    int count=0;
    int i=0;
    if(nums.size()==1)
    {
        return nums[i];
    }
        
    if(nums[0]!=nums[1])
        return nums[0];
    for(i=1;i<nums.size();i++)
    {
        if(nums[i]!=nums[i-1] && nums[i]!= nums[i+1])
        {
            return nums[i];
        }
    }
    return nums[i];



}
};

//Given an array of integers, find if the array contains any duplicates.

//Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.



class Solution {
public:
    
bool containsDuplicate(vector<int>& nums) {

    sort(nums.begin(),nums.end());

    int i=0;
    int j=1;


    while (j<nums.size())
    {
        if(nums[i]==nums[j])
        {
            return true;
        }
        i++;
        j++;
    }

    return false;



}

};

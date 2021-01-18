


class Solution {
public:
    
void swap(int *v, int *u)
{
    int temp;
    temp = *v;
    *v = *u;
    *u = temp;
}



void moveZeroes(vector<int>& nums) {




    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        {
            for(int j=i;j<nums.size();j++)
            {
                if(nums[j]!=0)
                {
                    swap(&nums[i],&nums[j]);
                    break;
                }
            }
        }
    }

}




};

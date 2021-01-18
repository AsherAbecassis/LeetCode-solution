
//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

//We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.






void sortColors(int* nums, int numsSize){

    int temp[3]={0};
    int j=0;
    int x=0;
    for(int i=0;i<numsSize;i++)
    {
        temp[nums[i]]++;
    }
    
    while (j<3) {
       
        if(temp[j]==0)
        {
            j++;
        }
        else{
            
            nums[x]=j;
            temp[j]--;
            x++;
        }
        
        
        
    }
}

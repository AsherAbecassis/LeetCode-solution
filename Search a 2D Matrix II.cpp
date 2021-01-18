
//Write an efficient algorithm that searches for a target value in an m x n integer matrix. The matrix has the following properties:

//Integers in each row are sorted in ascending from left to right.
//Integers in each column are sorted in ascending from top to bottom.



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
        
    if(matrix.empty())
    {
        return false;
    }
        
    int row =0;
    int cols=matrix[0].size()-1;
    int i=matrix.size();
        
    
        
   
    
    
    while (row<i && cols >=0) {
        
        
        if(matrix[row][cols]== target)
        {
            return true;
        }
        if(matrix[row][cols] > target)
        {
            cols--;
        }
        else{
            row++;
        }
        
        
        
    }
    
    
    
    return false;
    
}
};

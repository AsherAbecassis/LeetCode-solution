




class Solution {
public:
    
void swap(int &v, int &u)
{
    int temp;
    temp = v;
    v = u;
    u = temp;
}



//You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

//You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.







void rotate(vector<vector<int>>& matrix) {
      
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=i;j<matrix[i].size();j++)
        {
            swap(matrix[i][j], matrix[j][i]);
            
        }
    }
    
    
    int x=0;
    int j=matrix.size()-1;
    int i=0;
    
    while (i<matrix.size()) {
        
        while (x<j) {
            swap(matrix[i][x], matrix[i][j]);
            x++;
            j--;
        }
        x=0;
        j=matrix.size()-1;
        i++;
        
    }
    
    
    
    
}

};

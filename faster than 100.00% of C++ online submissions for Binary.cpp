//Given the root of a binary tree, return the inorder traversal of its nodes' values.



void inorder(TreeNode* root , vector<int> &a)
{
    if(root==NULL)
    {
        return;
    }
    
    if(root->left)
    {
        inorder(root->left,a);
    }
    a.push_back(root->val);
    if(root->right)
    {
       inorder(root->right,a);
    }
       
}


vector<int> inorderTraversal(TreeNode* root) {
    
    vector<int> ans;
    
    inorder(root,ans);
    return ans;
    
    
}

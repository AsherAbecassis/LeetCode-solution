

void inOrder(TreeNode *root ,vector<int> &v)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left)
    {
        inOrder(root->left, v);
    }
    v.push_back(root->val);
    if(root->right)
    {
        inOrder(root->right, v);
    }
}
bool isValidBST(TreeNode* root) {
    vector<int> v;

inOrder(root, v);
for(int i=1;i<v.size();i++)//if its sorted 
{
    if(v[i]<=v[i-1])
    {
        return false;
    }
}
return true;

}

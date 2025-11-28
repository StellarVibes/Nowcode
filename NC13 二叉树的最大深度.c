int _maxDepth(struct TreeNode* root ) 
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        return 1;
    }
    int left = _maxDepth(root->left);
    int right = _maxDepth(root->right);
    return left>right?left+1:right+1;
}
int maxDepth(struct TreeNode* root ) {
    return _maxDepth(root);
}
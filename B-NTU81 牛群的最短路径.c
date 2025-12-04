int _minDepth(struct TreeNode* root ) 
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        return 1;
    }
    int left = _minDepth(root->left);
    int right = _minDepth(root->right);
    if(left)
    {
        return left+1;
    }
    else 
    {
        return right+1;
    }
}

int minDepth(struct TreeNode* root ) {
    if(root==NULL)
    {
        return 0;
    }
    int left = _minDepth(root->left);
    int right = _minDepth(root->right);
    if(left==0)
    {
        return right+1;
    }
    if(right==0)
    {
        return left+1;
    }
    return left<right?left+1:right+1;
}